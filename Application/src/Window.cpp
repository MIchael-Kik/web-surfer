#include <Window.h>

Window::Window(const char* uri)
:  m_web_view(WEBKIT_WEB_VIEW(webkit_web_view_new()))
{
    set_default_size(800, 800);

    m_gtk_wrap = Glib::wrap(GTK_WIDGET(m_web_view));

    add(*m_gtk_wrap);

    webkit_web_view_load_uri(m_web_view, uri);

    show_all();
}

Window::~Window(){}