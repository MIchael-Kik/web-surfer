# Web Surfer Web Browser

Web surfer is a lightweight web browser built with Gtk and Webkit. Web surfer's main goal is to be as lightweight as possible while offering useful fetures fo the end user

Web surfer is currently in development for Linux, builds for Windows and Macs are going to be supported soon.

---
## Building Web Surf

Currently Web Surf needs to be complied from source and is only available for Linux. This is made easy with the use of makefiles.

### Instructions for GNU/Linux

- Download source code from github
`$ git clone https://github.com/MIchaelkik-web-surf.git`

- Install Depenencies if needed
    web_surf needs certian libraries in order to be created
    Install packages for Gtkmm-3.0 and webkit2gtk-4.0

- Build and install with Make
`$ sudo make clean install`

- Run web-surf
`$ web_surf`