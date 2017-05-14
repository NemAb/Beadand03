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
for(int i;i<3;i++){
int j=0;
spot[i][j]=250*i+150;
j=1;
spot[i][j]=50;

   }
 /*     for(int i=3;i<6;i++){
int j=0;
spot[i][j]=200*(i-3)+200;
j=1;
spot[i][j]=100;

   }
      for(int i=6;i<9;i++){
int j=0;
spot[i][j]=150*(i-6)+250;
j=1;
spot[i][j]=150;

   }
      for(int i=9;i<12;i++){
int j=0;
spot[i][j]=50*(i-9)+150;
j=1;
spot[i][j]=300;

   }
         for(int i=12;i<15;i++){
int j=0;
spot[i][j]=50*(i-12)+550;
j=1;
spot[i][j]=300;

   }
         for(int i=15;i<18;i++){
int j=0;
spot[i][j]=150*(i-15)+250;
j=1;
spot[i][j]=450;

   }
         for(int i=18;i<21;i++){
int j=0;
spot[i][j]=200*(i-18)+200;
j=1;
spot[i][j]=500;

   }
         for(int i=21;i<24;i++){
int j=0;
spot[i][j]=250*(i-21)+150;
j=1;
spot[i][j]=550;

   }*/

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
for(int i;i<24;i++){
    if(van[i]){
        gout<<move_to(spot[i][0],spot[i][1])<<color(255,0,0)<<box(10,10);
    }

}
}
void table::handle(event ev)
{
if(is_selected(ev.pos_x,ev.pos_y)){
    for(int i;i<24;i++){
    if(ev.pos_x==spot[i][0] && ev.pos_y==spot[i][1]){
        van[i]=true;
    }
    }
}
}



