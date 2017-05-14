#include "table.hpp"
#include "graphics.hpp"
#include "widget.hpp"
#include <vector>
using namespace genv;

table::table(int x, int y, int sx, int sy): Widget(x,y,sx,sy)
{
 _x=x;
    _y=y;
    _size_x = sx;
    _size_y=sy;


}
void table::draw()const
{
gout<<color(255,255,255)<<move_to(0,0)<<box(_size_x,_size_y); //hátttér
gout<<color(0,0,0)<<move_to(150,50)<<line_to(_size_x-150,50)<<line_to(_size_x-150,_size_y-50)
<<line_to(150,_size_y-50)<<line_to(150,50)
<<move_to(200,100)<<line_to(_size_x-200,100)<<line_to(_size_x-200,_size_y-100)
<<line_to(200,_size_y-100)<<line_to(200,100)
<<move_to(250,150)<<line_to(_size_x-250,150)<<line_to(_size_x-250,_size_y-150)
<<line_to(250,_size_y-150)<<line_to(250,150)
<<move_to(_size_x/2,50)<<line_to(_size_x/2,150)
<<move_to(_size_x-150,_size_y/2)<<line_to(_size_x-250,_size_y/2)
<<move_to(_size_x/2,_size_y-50)<<line_to(_size_x/2,_size_y-150)
<<move_to(150,_size_y/2)<<line_to(250,_size_y/2);
}
void table::handle(event ev)
{

}


gem::gem(int x, int y, int sx, int sy, bool szin): Widget(x,y,sx,sy)
{
    _size_x=sx;
    _size_y=sy;
    _x=x;
    _y=y;

    _szin=szin;
}
void gem::draw() const
{
    if(_szin) {
            gout<<move_to(_x,_y)<<color(255,0,0)<<box(20,20);
    }else{
            gout<<move_to(_x,_y)<<color(0,0,255)<<box(20,20);
    }
}
void gem::handle(event ev)
{


}
void gem::lep(int x, int y){
_x=x;
_y=y;
}
