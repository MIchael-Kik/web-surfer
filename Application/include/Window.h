#pragma once 

#include <gtkmm/window.h>
#include <gtkmm/widget.h>
#include <webkit2/webkit2.h>

class Window : public Gtk::Window
{
public:
    Window(const char* uri);
    virtual ~Window();

protected:

    // Webview wraper
    Gtk::Widget *m_gtk_wrap;

    // Webview
    WebKitWebView *m_web_view;
};