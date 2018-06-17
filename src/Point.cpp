#include "Point.h"
#include <iostream>

    Point::Point()
    {

    }

    Point::Point(const double x, const double y, const double z) : _x(x), _y(y), _z(z) {}

    double Point::getX() const
    {
        return _x;
    }

    double Point::getY() const
    {
        return _y;
    }

    double Point::getZ() const
    {
        return _z;
    }

    void Point::print_point() const
    {
        std::cout<<_x<<" "<<_y<<" "<<_z<<std::endl;
    }
