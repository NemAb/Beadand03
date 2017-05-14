#ifndef TABLE_HPP_INCLUDED
#define TABLE_HPP_INCLUDED

#include "widget.hpp"
#include <vector>

using namespace std;

class gem;

class table: public Widget{
protected:
vector<vector<int>> spot;
public:
    table(int x,int y, int sx, int sy);
    virtual void draw()const;
    virtual void handle(genv::event ev);
    virtual bool focusable() const {return false;}
};

class gem :public Widget {
protected:

    bool _szin;

public:
        gem(int x,int y, int sx, int sy,bool szin);
    virtual void draw()const;
    virtual void handle(genv::event ev);
    virtual bool focusable() const {return true;}
    virtual void lep(int x, int y);

};

#endif // TABLE_HPP_INCLUDED
