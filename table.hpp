#ifndef TABLE_HPP_INCLUDED
#define TABLE_HPP_INCLUDED

#include "widget.hpp"
#include <vector>

using namespace std;


class table: public Widget{
protected:
vector<vector<int>> spot;
vector<bool> van;
public:
    table(int x,int y, int sx, int sy);
    virtual void draw()const;
    virtual void handle(genv::event ev);
    virtual bool focusable() const {return false;}
};



#endif // TABLE_HPP_INCLUDED
