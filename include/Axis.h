#ifndef AXIS_H
#define AXIS_H

class Point;

class Axis{
public:
    Axis();
    Axis(const double x_min, const double x_max, const double y_min, const double y_max);
    void set_axis(const double x_min, const double x_max, const double y_min, const double y_max);
    //ustawia jako wartości skrajne ustalone przez współrzędne przesyłanego punktu - przydatne przy pierwszym wypełnieniu wartościami
    void set_axis(const Point & point_to_set);


    //sprawdza czy podany punkt, ma którąś z wartości mniejszą niż te w zmiennej
    void set_minimum_point(const Point & point);
    void set_maximum_point(const Point & point);

    double get_x_min() const;
    double get_x_max() const;
    double get_y_min() const;
    double get_y_max() const;
private:
    double x_axis_min, x_axis_max;
    double y_axis_min, y_axis_max;
};
#endif // AXIS_H
