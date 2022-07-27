#include "../include/Window.h"
#include <gtkmm/application.h>
// #include <webkit2/webkit2.h>

int main (int argc, char **argv)
{
	auto app = Gtk::Application::create(argc,argv, "web_surfer");

	Window window("https://google.com");

	return app ->run(window);
}


// int main(int argc, char* argv[])
// {
//   	// Creates the main Application
//   	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "web_surfer");

// 	// creates the window class interface
// 	Gtk::Window window;
// 	window.set_default_size(800, 800);

// 	// Creates a webview
// 	WebKitWebView *one = WEBKIT_WEB_VIEW(webkit_web_view_new());

// 	// converts the webview into a gtk widget
// 	Gtk::Widget *three = Glib::wrap( GTK_WIDGET(one));

// 	// adds the webview widget to the window
// 	window.add( *three);

// 	// loads a default uri for start up
// 	webkit_web_view_load_uri(one, "https://google.com");

// 	// renders out the entire page
// 	window.show_all();

// 	// runs the application
// 	app->run(window);
// 	exit (0);

// }