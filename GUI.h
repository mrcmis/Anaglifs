///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/filedlg.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame : public wxFrame
{
private:

protected:
	wxPanel* m_panel;
	wxButton* m_button_load_geometry;
	wxButton* m_button_save;
	wxStaticText* m_text_calibration;
	wxStaticText* m_text_calibration_range;
	wxSlider* m_slider_calibrate;
	wxStaticText* m_text_value_calibration;
	wxButton* m_button_color_one;
	wxButton* m_button_color_two;
	wxButton* m_button_color_back;
	wxStaticText* m_text_subject_title;
	wxStaticText* m_text_authors;
	wxStaticText* m_text_translationX;
	wxStaticText* m_text_translationX_range;
	wxSlider* m_slider_translationX;
	wxStaticText* m_text_value_translationX;
	wxStaticText* m_text_translationY;
	wxStaticText* m_text_translationY_range;
	wxSlider* m_slider_translationY;
	wxStaticText* m_text_value_translationY;
	wxStaticText* m_text_translationZ;
	wxStaticText* m_text_translationZ_range;
	wxSlider* m_slider_translationZ;
	wxStaticText* m_text_value_translationZ;
	wxStaticText* m_text_rotationX;
	wxStaticText* m_text_rotationX_range;
	wxSlider* m_slider_rotationX;
	wxStaticText* m_text_value_rotationX;
	wxStaticText* m_text_rotationY;
	wxStaticText* m_text_rotationY_range;
	wxSlider* m_slider_rotationY;
	wxStaticText* m_text_value_rotationY;
	wxStaticText* m_text_rotationZ;
	wxStaticText* m_text_rotationZ_range;
	wxSlider* m_slider_rotationZ;
	wxStaticText* m_text_value_rotationZ;
	wxStaticText* m_text_scaleX;
	wxStaticText* m_text_scaleX_range;
	wxSlider* m_slider_scaleX;
	wxStaticText* m_text_value_scaleX;
	wxStaticText* m_text_scaleY;
	wxStaticText* m_text_scaleY_range;
	wxSlider* m_slider_scaleY;
	wxStaticText* m_text_value_scaleY;
	wxStaticText* m_text_scaleZ;
	wxStaticText* m_text_scaleZ_range;
	wxSlider* m_slider_scaleZ;
	wxStaticText* m_text_value_scaleZ;

	wxBitmap* save_bitmap;
	wxFileDialog* SaveDialog;

	virtual void WxPanel_Repaint(wxUpdateUIEvent& event) { event.Skip(); }
	virtual void m_button_load_geometry_click(wxCommandEvent& event) { event.Skip(); }
	virtual void m_button_save_click(wxCommandEvent& event) { event.Skip(); }
	virtual void m_button_background_click(wxCommandEvent& event) { event.Skip(); }
    virtual void m_button_color1_click(wxCommandEvent& event) { event.Skip(); }
	virtual void m_button_color2_click(wxCommandEvent& event) { event.Skip(); }

	virtual void Scrolls_Updated(wxScrollEvent& event) { event.Skip(); }

public:

	MyFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1200, 850), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~MyFrame();

};

#endif //__NONAME_H__
