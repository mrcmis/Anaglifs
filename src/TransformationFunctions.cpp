#include "TransformationFunctions.h"
#include <cmath>
#include "Matrix4D.h"
#include "Point.h"
#include "Axis.h"



Matrix4D translation(const int x_trans, const int y_trans, const int z_trans)
{
    //std::cout<<"translacja x"<<x_trans<<std::endl;

    Matrix4D translation_matrix;
    //translacja x
    translation_matrix(0, 3, (x_trans - 100)/100.0);
    //translacja y
    translation_matrix(1, 3, (y_trans - 100)/100.0);
    //translacja z
    translation_matrix(2, 3, (z_trans - 100)/100.0);

    return translation_matrix;
}

Matrix4D scale(const int x_scale, const int y_scale, const int z_scale)
{
    Matrix4D scale_matrix;
    //translacja x
    scale_matrix(0, 0, x_scale/100.0);
    //translacja y
    scale_matrix(1, 1, y_scale/100.0);
    //translacja z
    scale_matrix(2, 2, z_scale/100.0);

    return scale_matrix;
}

Matrix4D rotation(const int x_rotation, const int y_rotation, const int z_rotation)
{
    double x_angle = x_rotation * M_PI/180.0;
    double y_angle = y_rotation * M_PI/180.0;
    double z_angle = z_rotation * M_PI/180.0;

    Matrix4D result_rotation;
    Matrix4D rotation_matrix;
    //translacja x
    rotation_matrix(0, 0, 1);
    rotation_matrix(1, 1, cos(x_angle));
    rotation_matrix(1, 2, sin(x_angle));
    rotation_matrix(2, 1, -sin(x_angle));
    rotation_matrix(2, 2, cos(x_angle));

    result_rotation = result_rotation * rotation_matrix;
    rotation_matrix.toIdentity();
    //translacja y
    rotation_matrix(0, 0, cos(y_angle));
    rotation_matrix(0, 2, -sin(y_angle));
    rotation_matrix(1, 1, 1);
    rotation_matrix(2, 0, sin(y_angle));
    rotation_matrix(2, 2, cos(y_angle));

    result_rotation = result_rotation * rotation_matrix;
    rotation_matrix.toIdentity();
    //translacja z
    rotation_matrix(0, 0, cos(z_angle));
    rotation_matrix(0, 1, sin(z_angle));
    rotation_matrix(1, 0, -sin(z_angle));
    rotation_matrix(1, 1, cos(z_angle));
    rotation_matrix(2, 2, 1);

    result_rotation = result_rotation * rotation_matrix;

    return result_rotation;
}

Point performTransformation(const Point & point, const Matrix4D & transformation_matrix)
{
    Vector4D point_vector(point.getX(), point.getY(), point.getZ());
    Vector4D result = transformation_matrix * point_vector;

    return Point(result.getX(), result.getY(), result.getZ());
}

Point convertPoint(const Point & point){
    double x = point.getX();
    double y = point.getY();
    double z = point.getZ();

    double d = 3;//domyœlnie oddalony o 3
    x = x * d/(z + d);
    y = -(y*d/(z+d));

    return Point(x, y, 0);
}

void scale2screen(Point & point, const double screen_width, const double screen_height, const Axis & axis_limitations)
{
    //najpierw przesuwam punkty, w taki sposób, aby najmniejszy możliwy punkt znalazł się w punkcie (0, 0)
    point._x -= axis_limitations.get_x_min();
    point._y -= axis_limitations.get_y_min(); //nie wiem czy zadziała dla ujemnych

    //zakres osi
    double x_range = axis_limitations.get_x_max() - axis_limitations.get_x_min();
    double y_range = axis_limitations.get_y_max() - axis_limitations.get_y_min();

    //stosunek wymiaru ekranu do zakresu osi
    double x_scale = screen_width / x_range;
    double y_scale = screen_height / y_range;

    point._x *= x_scale;
    point._y *= y_scale;
}
