#include "engine.hpp"
#include "graphics.hpp"
#include <vector>

using namespace std;
using namespace genv;

engine::engine(){
   for(int i;i<3;i++){
int j=0;
spot[i][j]=250*i+150;
j=1;
spot[i][j]=50;

   }
      for(int i=3;i<6;i++){
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

   }
}

int engine::hely(event ev){
    for(int i;i<24;i++){
if(ev.type==ev_mouse && ev.button==btn_left && ev.pos_y==spot[i][1]){
    return spot[i][1];
}
    }

}
int engine::helx(event ev){
    for(int i;i<24;i++){
if(ev.type==ev_mouse && ev.button==btn_left && ev.pos_x==spot[i][0]){
    return spot[i][0];
}
    }

}
bool engine::szabalyos(){
for(int i;i<24;i++){
    for(int j;j<2;j++){

    }
}
}
bool engine::mellette(int _i, int _j){
for(int i;i<24;i++){
    for(int j;j<2;j++){


    }
}
}
int engine::getvalue(int i, int j){
return spot[i][j];
}
