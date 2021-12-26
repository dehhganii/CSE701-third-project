#include <iostream>
#include "point.hpp"
#include <vector>
using namespace std;
//default constructor with no input. Set it to (0, 0)
point::point()
{
    set_cooridnates(0, 0);
}
//default constructor with one input. Set it to (x, x)
point::point(const double &_x)
{
    set_cooridnates(_x, _x);
}
//default constructor with two input. Set it to (x, y)
point::point(const double &_x, const double &_y)
{
    set_cooridnates(_x, _y);
}
//Set the coordinates of a point
void point::set_cooridnates(const double &_x, const double &_y)
{
    x = _x;
    y = _y;
}

std::vector<double> point::get_coordinates() const
{
    vector<double> cooridnates(2); 
    cooridnates[0] = x;
    cooridnates[1] = y;
    return cooridnates;
}
