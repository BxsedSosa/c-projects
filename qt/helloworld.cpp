#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld() : m_button("Hellow World") {
  m_button.set_margin(10);
  m_button.signal_clicked();
}
