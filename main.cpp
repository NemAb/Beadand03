#include "widget.hpp"
#include "table.hpp"
#include "window.hpp"
#include <vector>

using namespace std;
using namespace genv;


///////////////////////////////////////////////////

int main()
{
    gout.open(800,600);
    Window *mywindow = new Window;
    mywindow->event_loop();
    return 0;
}
