///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"


///////////////////////////////////////////////////////////////////////////

MyFrame::MyFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxSize(1200, 850), wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxHORIZONTAL);

	m_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(800, 600), wxTAB_TRAVERSAL);
	bSizer2->Add(m_panel, 1, wxEXPAND | wxALL, 5);

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer(wxVERTICAL);

	m_button_load_geometry = new wxButton(this, wxID_ANY, wxT("Wczytaj geometrie"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer4->Add(m_button_load_geometry, 0, wxALIGN_CENTER | wxALL, 5);

	m_button_save = new wxButton(this, wxID_ANY, wxT("Zapisz"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer4->Add(m_button_save, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_calibration = new wxStaticText(this, wxID_ANY, wxT("Kalibracja"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_calibration->Wrap(-1);
	bSizer4->Add(m_text_calibration, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer(wxHORIZONTAL);

	m_text_calibration_range = new wxStaticText(this, wxID_ANY, wxT("(-50 : 50)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_calibration_range->Wrap(-1);
	bSizer171->Add(m_text_calibration_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_calibrate = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	m_slider_calibrate->SetRange(-50, 50);
	m_slider_calibrate->SetValue(5);

	bSizer171->Add(m_slider_calibrate, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_calibration = new wxStaticText(this, wxID_ANY, wxT("50"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_calibration->Wrap(-1);
	m_text_value_calibration->SetLabel(wxString::Format(wxT("%dpx"), m_slider_calibrate->GetValue()));//nie wiem czy to dobre do ustawienia domyślnej wartości
	bSizer171->Add(m_text_value_calibration, 0, wxALL, 5);


	bSizer4->Add(bSizer171, 0, wxALIGN_CENTER, 5);

	m_button_color_one = new wxButton(this, wxID_ANY, wxT("Kolor 1"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer4->Add(m_button_color_one, 0, wxALIGN_CENTER | wxALL, 5);

	m_button_color_two = new wxButton(this, wxID_ANY, wxT("Kolor 2"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer4->Add(m_button_color_two, 0, wxALIGN_CENTER | wxALL, 5);

	m_button_color_back = new wxButton(this, wxID_ANY, wxT("Tlo"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer4->Add(m_button_color_back, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_subject_title = new wxStaticText(this, wxID_ANY, wxT("Grafika komputerowa 2018 "), wxDefaultPosition, wxDefaultSize, 0);
	m_text_subject_title->Wrap(-1);
	bSizer4->Add(m_text_subject_title, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_authors = new wxStaticText(this, wxID_ANY, wxT("Jakub Kowalski, Pawel Oczadly, Marcin Mis"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_authors->Wrap(-1);
	bSizer4->Add(m_text_authors, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer2->Add(bSizer4, 1, wxEXPAND, 5);


	bSizer1->Add(bSizer2, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer(wxVERTICAL);

	m_text_translationX = new wxStaticText(this, wxID_ANY, wxT("Translacja X"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_translationX->Wrap(-1);
	bSizer5->Add(m_text_translationX, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer(wxHORIZONTAL);

	m_text_translationX_range = new wxStaticText(this, wxID_ANY, wxT("(-100 : 100)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_translationX_range->Wrap(-1);
	bSizer8->Add(m_text_translationX_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_translationX = new wxSlider(this, wxID_ANY, 100, 0, 200, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer8->Add(m_slider_translationX, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_translationX = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_translationX->Wrap(-1);
	bSizer8->Add(m_text_value_translationX, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer5->Add(bSizer8, 1, wxALIGN_CENTER, 5);

	m_text_translationY = new wxStaticText(this, wxID_ANY, wxT("Translacja Y"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_translationY->Wrap(-1);
	bSizer5->Add(m_text_translationY, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer(wxHORIZONTAL);

	m_text_translationY_range = new wxStaticText(this, wxID_ANY, wxT("(-100 : 100)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_translationY_range->Wrap(-1);
	bSizer9->Add(m_text_translationY_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_translationY = new wxSlider(this, wxID_ANY, 100, 0, 200, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer9->Add(m_slider_translationY, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_translationY = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_translationY->Wrap(-1);
	bSizer9->Add(m_text_value_translationY, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer5->Add(bSizer9, 1, wxALIGN_CENTER_HORIZONTAL, 5);

	m_text_translationZ = new wxStaticText(this, wxID_ANY, wxT("Translacja Z"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_translationZ->Wrap(-1);
	bSizer5->Add(m_text_translationZ, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer(wxHORIZONTAL);

	m_text_translationZ_range = new wxStaticText(this, wxID_ANY, wxT("(-100 : 100)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_translationZ_range->Wrap(-1);
	bSizer11->Add(m_text_translationZ_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_translationZ = new wxSlider(this, wxID_ANY, 100, 0, 200, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer11->Add(m_slider_translationZ, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_translationZ = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_translationZ->Wrap(-1);
	bSizer11->Add(m_text_value_translationZ, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer5->Add(bSizer11, 1, wxALIGN_CENTER_HORIZONTAL, 5);


	bSizer3->Add(bSizer5, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer(wxVERTICAL);

	m_text_rotationX = new wxStaticText(this, wxID_ANY, wxT("Rotacja X"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_rotationX->Wrap(-1);
	bSizer6->Add(m_text_rotationX, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer(wxHORIZONTAL);

	m_text_rotationX_range = new wxStaticText(this, wxID_ANY, wxT("(0 : 360)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_rotationX_range->Wrap(-1);
	bSizer12->Add(m_text_rotationX_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_rotationX = new wxSlider(this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer12->Add(m_slider_rotationX, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_rotationX = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_rotationX->Wrap(-1);
	bSizer12->Add(m_text_value_rotationX, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer6->Add(bSizer12, 1, wxALIGN_CENTER_HORIZONTAL, 5);

	m_text_rotationY = new wxStaticText(this, wxID_ANY, wxT("Rotacja Y"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_rotationY->Wrap(-1);
	bSizer6->Add(m_text_rotationY, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer(wxHORIZONTAL);

	m_text_rotationY_range = new wxStaticText(this, wxID_ANY, wxT("(0 : 360)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_rotationY_range->Wrap(-1);
	bSizer13->Add(m_text_rotationY_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_rotationY = new wxSlider(this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer13->Add(m_slider_rotationY, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_rotationY = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_rotationY->Wrap(-1);
	bSizer13->Add(m_text_value_rotationY, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer6->Add(bSizer13, 1, wxALIGN_CENTER_HORIZONTAL, 5);

	m_text_rotationZ = new wxStaticText(this, wxID_ANY, wxT("Rotacja Z"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_rotationZ->Wrap(-1);
	bSizer6->Add(m_text_rotationZ, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer(wxHORIZONTAL);

	m_text_rotationZ_range = new wxStaticText(this, wxID_ANY, wxT("(0 : 360)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_rotationZ_range->Wrap(-1);
	bSizer14->Add(m_text_rotationZ_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_rotationZ = new wxSlider(this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer14->Add(m_slider_rotationZ, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_rotationZ = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_rotationZ->Wrap(-1);
	bSizer14->Add(m_text_value_rotationZ, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer6->Add(bSizer14, 1, wxALIGN_CENTER_HORIZONTAL, 5);


	bSizer3->Add(bSizer6, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer(wxVERTICAL);

	m_text_scaleX = new wxStaticText(this, wxID_ANY, wxT("Skala X"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_scaleX->Wrap(-1);
	bSizer7->Add(m_text_scaleX, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer(wxHORIZONTAL);

	m_text_scaleX_range = new wxStaticText(this, wxID_ANY, wxT("(-100 : 100)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_scaleX_range->Wrap(-1);
	bSizer15->Add(m_text_scaleX_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_scaleX = new wxSlider(this, wxID_ANY, 100, 0, 200, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer15->Add(m_slider_scaleX, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_scaleX = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_scaleX->Wrap(-1);
	bSizer15->Add(m_text_value_scaleX, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer7->Add(bSizer15, 1, wxALIGN_CENTER, 5);

	m_text_scaleY = new wxStaticText(this, wxID_ANY, wxT("Skala Y"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_scaleY->Wrap(-1);
	bSizer7->Add(m_text_scaleY, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer(wxHORIZONTAL);

	m_text_scaleY_range = new wxStaticText(this, wxID_ANY, wxT("(-100 : 100)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_scaleY_range->Wrap(-1);
	bSizer16->Add(m_text_scaleY_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_scaleY = new wxSlider(this, wxID_ANY, 100, 0, 200, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer16->Add(m_slider_scaleY, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_scaleY = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_scaleY->Wrap(-1);
	bSizer16->Add(m_text_value_scaleY, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer7->Add(bSizer16, 1, wxALIGN_CENTER, 5);

	m_text_scaleZ = new wxStaticText(this, wxID_ANY, wxT("Skala Z"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_scaleZ->Wrap(-1);
	bSizer7->Add(m_text_scaleZ, 0, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer(wxHORIZONTAL);

	m_text_scaleZ_range = new wxStaticText(this, wxID_ANY, wxT("(-100 : 100)"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_scaleZ_range->Wrap(-1);
	bSizer17->Add(m_text_scaleZ_range, 0, wxALIGN_CENTER | wxALL, 5);

	m_slider_scaleZ = new wxSlider(this, wxID_ANY, 100, 0, 200, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer17->Add(m_slider_scaleZ, 0, wxALIGN_CENTER | wxALL, 5);

	m_text_value_scaleZ = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_text_value_scaleZ->Wrap(-1);
	bSizer17->Add(m_text_value_scaleZ, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer7->Add(bSizer17, 1, wxALIGN_CENTER, 5);


	bSizer3->Add(bSizer7, 1, wxEXPAND, 5);


	bSizer1->Add(bSizer3, 1, wxEXPAND, 5);


	SaveDialog = new wxFileDialog(this, _("Wybierz plik:"), _(""), _(""), _("pliki jpeg (*.jpeg)|*.jpeg"), wxFD_SAVE);

	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	m_panel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame::WxPanel_Repaint ), NULL, this );
	m_button_load_geometry->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button_load_geometry_click ), NULL, this );

	m_button_save->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_save_click), NULL, this);
	m_button_color_back->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_background_click), NULL, this);
	m_button_color_one->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_color1_click), NULL, this);
	m_button_color_two->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_color2_click), NULL, this);


	m_slider_translationX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );

	m_slider_translationY->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_translationZ->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_scaleX->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_scaleY->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_scaleZ->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_rotationX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );

	m_slider_rotationY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );

	m_slider_rotationZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );

	m_slider_calibrate->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
}

MyFrame::~MyFrame()
{
	// Disconnect Events
	m_panel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame::WxPanel_Repaint ), NULL, this );
	m_button_load_geometry->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button_load_geometry_click ), NULL, this );

	m_button_save->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_save_click), NULL, this);
	m_button_color_back->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_background_click), NULL, this);
    m_button_color_one->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_color1_click), NULL, this);
	m_button_color_two->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_color2_click), NULL, this);

	m_slider_translationX->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationX->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationX->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationX->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationX->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationX->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationX->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationX->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_translationY->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationY->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_translationZ->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_translationZ->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_scaleX->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleX->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_scaleY->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleY->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_scaleZ->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_scaleZ->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_rotationX->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationX->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationX->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationX->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationX->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationX->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationX->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationX->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationX->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_rotationY->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationY->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationY->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationY->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationY->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationY->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationY->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationY->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationY->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_rotationZ->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);

	m_slider_calibrate->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);
	m_slider_calibrate->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::Scrolls_Updated), NULL, this);


}
