#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include "widget.hpp"
#include "table.hpp"
#include <vector>


class Window {
protected:
    std::vector<gem*> widgets;
public:
    virtual void esemeny(std::string mitortent){}

    void event_loop() ;
};



#endif // WINDOW_HPP_INCLUDED
