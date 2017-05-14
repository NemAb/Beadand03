#include "window.hpp"
#include "engine.hpp"
#include "widget.hpp"
#include "table.hpp"
using namespace genv;

void Window::event_loop() {
    event ev;
    table* t = new table(0,0,800,600);
    t->draw();
    engine* e= new engine();
    widgets.push_back(new gem(10,20,10,10,true));
    int focus = -1;
    while(gin >> ev ) {
        if (ev.type == ev_key && ev.keycode == key_tab) {
            if(focus!=-1) {
                widgets[focus]->unfocus();
            }
            do {
                focus++;
                if (focus>=widgets.size()) focus =0;
            } while (!widgets[focus]->focusable()); //TODO:vegtelenciklus!
            widgets[focus]->focus();
        }
        if (ev.type == ev_mouse && ev.button==btn_left) {
            for (size_t i=0;i<widgets.size();i++) {
                if (widgets[i]->is_selected(ev.pos_x, ev.pos_y) && widgets[i]->focusable()) {
                        if (focus!=-1) widgets[focus]->unfocus();
                        focus = i;
                        widgets[focus]->focus();
                }
            }
        }
        if (focus!=-1) {
                widgets[focus]->lep(e->helx(ev),e->hely(ev));
            widgets[focus]->handle(ev);
        }
        for (size_t i=0;i<widgets.size();i++) {
            widgets[i]->draw();
        }
        gout << refresh;
    }
}
