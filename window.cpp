#include "window.hpp"
#include "table.hpp"
#include "engine.hpp"
using namespace genv;

void Window::event_loop() {
    event ev;
    engine* e;
t= new table(0,0,800,600);
g= new gem(10,20,20,20,true);

    while(gin >> ev ) {
t->draw();
g->draw();

        gout << refresh;
    }
}
