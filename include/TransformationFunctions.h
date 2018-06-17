#ifndef TRANSFORMATIONFUNCTIONS_H_INCLUDED
#define TRANSFORMATIONFUNCTIONS_H_INCLUDED

class Matrix4D;
class Point;
class Axis;
//zwraca macierz translacji
Matrix4D translation(const int x_trans, const int y_trans, const int z_trans);
//zwraca macierz skalowania
Matrix4D scale(const int x_scale, const int y_scale, const int z_scale);
//zwraca macierz rotacji
Matrix4D rotation(const int x_rotation, const int y_rotation, const int z_rotation);

//dokonuje transformacji w przestrzeni 3D dla punktu na podstawie przesłanej macierzy transforamcji
Point performTransformation(const Point & point, const Matrix4D & transformation_matrix);
//zwraca punkt, który można wyświetlić w formie 2D - na podstawie ppunktu przesłanego w formie 3D
Point convertPoint(const Point & point);
//przeskalowuje punkt zapisany w przestrzeni 2D, tak aby dopasować go do ekranu, na podstawie przesłanego zakresu osi
void scale2screen(Point & point, const double screen_width, const double screen_height, const Axis & axis_limitations);




#endif // TRANSFORMATIONFUNCTIONS_H_INCLUDED
