#pragma once

#include <gtkmm-2.4/gtkmm/button.h>
#include <gtkmm-2.4/gtkmm/window.h>

class HelloWorld : public Gtk::Window {
public:
  HelloWorld();
  ~HelloWorld() override;

protected:
  void on_button_clicked();
  Gtk::Button m_button;
};
