#include "../include/Window.h"
#include <iostream>

Window::Window(const char* uri)
:  m_box(Gtk::Orientation::ORIENTATION_VERTICAL, 0), m_button("Hello World"), m_web_view(WEBKIT_WEB_VIEW(webkit_web_view_new()))
{
    add(m_box);

    m_button.signal_clicked().connect(sigc::mem_fun(*this,
        &Window::on_button_clicked));

    m_box.pack_start(m_button);

    m_gtk_wrap = Glib::wrap(GTK_WIDGET(m_web_view));

    m_box.pack_start(*m_gtk_wrap);

    webkit_web_view_load_uri(m_web_view, uri);

    show_all();
}

Window::~Window(){}

void Window::on_button_clicked()
{
    std::cout << "Hello World" << std::endl;
}