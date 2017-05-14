#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

#include "graphics.hpp"
#include <vector>

using namespace std;
using namespace genv;
class engine {
    vector<vector<int>> spot;
public:
    engine();
    int hely(event ev);
    int helx(event ev);
    bool szabalyos();
    bool mellette(int i,int j);
    int getvalue(int i, int j);


};

#endif // ENGINE_HPP_INCLUDED
