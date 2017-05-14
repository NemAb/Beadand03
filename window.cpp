#include "window.hpp"
#include "table.hpp"
#include "engine.hpp"
using namespace genv;

void Window::event_loop() {
    event ev;
    engine* e;
t= new table(0,0,800,600);



    while(gin >> ev ) {
t->draw();

        gout << refresh;
    }
}
