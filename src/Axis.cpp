#include "Axis.h"
#include "Point.h"

    Axis::Axis()
    {
    }

    Axis::Axis(const double x_min, const double x_max, const double y_min, const double y_max)
    {
        x_axis_min = x_min;
        x_axis_max = x_max;
        y_axis_min = y_min;
        y_axis_max = y_max;
    }

    void Axis::set_axis(const double x_min, const double x_max, const double y_min, const double y_max)
    {
        x_axis_min = x_min;
        x_axis_max = x_max;
        y_axis_min = y_min;
        y_axis_max = y_max;
    }

    void Axis::set_axis(const Point & point_to_set)
    {
        x_axis_min = point_to_set.getX();
        x_axis_max = point_to_set.getX();
        y_axis_min = point_to_set.getY();
        y_axis_max = point_to_set.getY();
    }

    void Axis::set_minimum_point(const Point & point)
    {
        if (point.getX() < x_axis_min)
            x_axis_min = point.getX();

        if (point.getY() < y_axis_min)
            y_axis_min = point.getY();
    }

    void Axis::set_maximum_point(const Point & point)
    {
        if (point.getX() > x_axis_max)
            x_axis_max = point.getX();

        if (point.getY() > y_axis_max)
            y_axis_max = point.getY();
    }

    double Axis::get_x_min() const{
        return x_axis_min;
    }

    double Axis::get_x_max() const{
        return x_axis_max;
    }

    double Axis::get_y_min() const{
        return y_axis_min;
    }

    double Axis::get_y_max() const{
        return y_axis_max;
    }
