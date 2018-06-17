#ifndef POINT_H
#define POINT_H

class Axis;

class Point {
friend void scale2screen(Point & point, const double screen_width, const double screen_height, const Axis & axis_limitations);

public:
    Point();
    Point(const double x, const double y, const double z);
    double getX() const;
    double getY() const;
    double getZ() const;
    void print_point() const;
private:
    double _x, _y, _z;
};

#endif // POINT_H
