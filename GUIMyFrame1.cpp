#include "GUIMyFrame1.h"
#include "TransformationFunctions.h"
#include <fstream>
#include <cmath>
#include "Vector4D.h"
#include "Matrix4D.h"
#include "Point.h"

#include <iostream> // debug


GUIMyFrame1::GUIMyFrame1(wxWindow* parent) : MyFrame(parent) {
	//ustawienie domyślnych kolorów krawędzi
	left_eye_color.Set(255, 0, 0);
	right_eye_color.Set(0, 0, 255);
	//ustawienie domyślnego koloru tła
	m_panel->SetBackgroundColour(wxColour(0, 0, 0));
}

void GUIMyFrame1::WxPanel_Repaint(wxUpdateUIEvent& event)
{
	Repaint();
}

void GUIMyFrame1::m_button_load_geometry_click(wxCommandEvent& event)
{
	wxFileDialog WxOpenFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("Geometry file (*.geo)|*.geo"), wxFD_OPEN | wxFD_FILE_MUST_EXIST);

	if (WxOpenFileDialog.ShowModal() == wxID_OK)
	{
		double point[2][3];
		Point points_in_2D[2];

		Point min_values, max_values;//określają najmniejszą i największą wartość punktów na wejściu - pozwala na dopasowanie rozmiarów osoi na ekranie
		int input_type;
		int number_of_lines;

		std::ifstream in(WxOpenFileDialog.GetPath().ToAscii());
		if (in.is_open())
		{
			data.clear();
			in >> number_of_lines;
			data.reserve(number_of_lines);
			while (!in.eof())
			{

				in >> input_type >> point[0][0] >> point[0][1] >> point[0][2] >> point[1][0] >> point[1][1] >> point[1][2];
				in.ignore(1000000, '\n');
				//przekonwertuj oba punkty do 2D
				for (unsigned int i = 0; i <= 1; i++)
				{
					points_in_2D[i] = Point(point[i][0], point[i][1], point[i][2]);
					points_in_2D[i] = convertPoint(points_in_2D[i]);
				}

				//konwertuję punkty do 2D, żeby znać ich wymiary w tej - wyświetlanej perspektywie


				for (unsigned int i = 0; i <= 1; i++)
				{
					axis_limitations.set_minimum_point(points_in_2D[i]);
					axis_limitations.set_maximum_point(points_in_2D[i]);
				}



				data.push_back(Segment(Point(point[0][0], point[0][1], point[0][2]), Point(point[1][0], point[1][1], point[1][2])));
			}
			in.close();
		}
	}
}

void GUIMyFrame1::m_button_save_click(wxCommandEvent& event)
{
	wxClientDC clientDC(this->m_panel);
	wxBufferedDC DC_Buffer(&clientDC);
	// przygotowanie bufora
	PrepareDC(DC_Buffer);
	// przygotowanie rozszerzen
	wxInitAllImageHandlers();

	wxString fileName;

	if (SaveDialog->ShowModal() == wxID_OK)
	{
		Repaint();
		fileName = SaveDialog->GetPath();

		wxSize size = m_panel->GetVirtualSize();
		save_bitmap = new wxBitmap(size);

		wxMemoryDC memory;
		memory.SelectObject(*save_bitmap);
		memory.Blit(0, 0, size.GetX(), size.GetY(), &DC_Buffer, 0, 0, wxCOPY, true);

		wxImage result = save_bitmap->ConvertToImage();
		result.SaveFile(fileName, wxBITMAP_TYPE_JPEG);
	}
}


void GUIMyFrame1::m_button_background_click(wxCommandEvent& event)
{
	wxColourData data;
	data.SetChooseFull(true);
	for (int i = 0; i < 16; i++)
	{
		wxColour colour(i * 16, i * 16, i * 16);
		data.SetCustomColour(i, colour);
	}
	wxColourDialog dialog(this, &data);
	if (dialog.ShowModal() == wxID_OK)
	{
		wxColourData retData = dialog.GetColourData();
		wxColour col = retData.GetColour();
		m_panel->SetBackgroundColour(col);
	}
	Repaint();
}

void GUIMyFrame1::m_button_color1_click(wxCommandEvent& event)
{
	wxColourData data;
	data.SetChooseFull(true);
	for (int i = 0; i < 16; i++)
	{
		wxColour colour(i * 16, i * 16, i * 16);
		data.SetCustomColour(i, colour);
	}
	wxColourDialog dialog(this, &data);
	if (dialog.ShowModal() == wxID_OK)
	{
		wxColourData retData = dialog.GetColourData();
		wxColour col = retData.GetColour();
		left_eye_color = col;
	}
	Repaint();
}

void GUIMyFrame1::m_button_color2_click(wxCommandEvent& event)
{
	wxColourData data;
	data.SetChooseFull(true);
	for (int i = 0; i < 16; i++)
	{
		wxColour colour(i * 16, i * 16, i * 16);
		data.SetCustomColour(i, colour);
	}
	wxColourDialog dialog(this, &data);
	if (dialog.ShowModal() == wxID_OK)
	{
		wxColourData retData = dialog.GetColourData();
		wxColour col = retData.GetColour();
		right_eye_color = col;
	}
	Repaint();
}

void GUIMyFrame1::Scrolls_Updated(wxScrollEvent& event)
{
	// Repaint();
	m_text_value_translationX->SetLabel(wxString::Format(wxT("%d"), m_slider_translationX->GetValue() - 100));
	m_text_value_translationY->SetLabel(wxString::Format(wxT("%d"), m_slider_translationY->GetValue() - 100));
	m_text_value_translationZ->SetLabel(wxString::Format(wxT("%d"), m_slider_translationZ->GetValue() - 100));

	m_text_value_rotationX->SetLabel(wxString::Format(wxT("%d"), m_slider_rotationX->GetValue()));
	m_text_value_rotationY->SetLabel(wxString::Format(wxT("%d"), m_slider_rotationY->GetValue()));
	m_text_value_rotationZ->SetLabel(wxString::Format(wxT("%d"), m_slider_rotationZ->GetValue()));

	m_text_value_scaleX->SetLabel(wxString::Format(wxT("%d"), m_slider_scaleX->GetValue() - 100));
	m_text_value_scaleY->SetLabel(wxString::Format(wxT("%d"), m_slider_scaleY->GetValue() - 100));
	m_text_value_scaleZ->SetLabel(wxString::Format(wxT("%d"), m_slider_scaleZ->GetValue() - 100));

	m_text_value_calibration->SetLabel(wxString::Format(wxT("%dpx"), m_slider_calibrate->GetValue()));
}

void GUIMyFrame1::draw_2d_line(wxDC *dc, const Point & begin_point, const Point & end_point)
{
    dc->SetPen(wxPen(left_eye_color));// do ustawiania koloru
	dc->DrawLine(begin_point.getX(), begin_point.getY(), end_point.getX(), end_point.getY());
	//prawe oko
	dc->SetPen(wxPen(right_eye_color));// do ustawiania koloru
	dc->DrawLine(begin_point.getX() + edges_distance, begin_point.getY(), end_point.getX() + edges_distance, end_point.getY());
}

void GUIMyFrame1::Repaint()
{
	wxClientDC dc1(m_panel);
	wxBufferedDC dc(&dc1);

	dc.Clear();
	int screen_w, screen_h;
	m_panel->GetSize(&screen_w, &screen_h);
	dc.SetClippingRegion(wxRect(0, 0, screen_w, screen_h));

	Matrix4D transformation_matrix;

	transformation_matrix = transformation_matrix * translation(m_slider_translationX->GetValue(), m_slider_translationY->GetValue()
		, m_slider_translationZ->GetValue()) *
		rotation(m_slider_rotationX->GetValue(), m_slider_rotationY->GetValue(), m_slider_rotationZ->GetValue()) *
		scale(m_slider_scaleX->GetValue(), m_slider_scaleY->GetValue(), m_slider_scaleZ->GetValue());

    //ustawia wartość określającą odległość między krawędziami w pikselach(kalibracja obrazu)
	edges_distance = m_slider_calibrate->GetValue();

	for (unsigned int i = 0; i < data.size(); i++)
	{
		Point begin_point_2d = performTransformation(data[i].begin, transformation_matrix);
		Point end_point_2d = performTransformation(data[i].end, transformation_matrix);


		begin_point_2d = convertPoint(begin_point_2d);
		end_point_2d = convertPoint(end_point_2d);


		scale2screen(begin_point_2d, screen_w, screen_h, axis_limitations);
		scale2screen(end_point_2d, screen_w, screen_h, axis_limitations);
		draw_2d_line(&dc, begin_point_2d, end_point_2d);
	}
}
