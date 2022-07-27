#pragma once 

#include <gtkmm/button.h>
#include <gtkmm/box.h>
#include <gtkmm/widget.h>
#include <gtkmm/window.h>
#include <webkit2/webkit2.h>

class Window : public Gtk::Window
{
public:
    Window(const char* uri);
    virtual ~Window();

protected:

    //Signal Handlers
    void on_button_clicked();

    // Member containers
    Gtk::Box m_box;

    //Member Widgets
    Gtk::Button m_button;
    Gtk::Widget *m_gtk_wrap;

    // Webview
    WebKitWebView *m_web_view;
};