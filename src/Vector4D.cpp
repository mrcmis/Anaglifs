#include "Vector4D.h"

Vector4D::Vector4D(const double x, const double y, const double z)
{
    content[0] = x;
    content[1] = y;
    content[2] = z;
    content[3] = 1;
}

void Vector4D::setVector(double x,double y,double z)
{
    content[0] = x;
    content[1] = y;
    content[2] = z;
}

double Vector4D::getX()
{
    return content[0];
}

double Vector4D::getY()
{
    return content[1];
}

double Vector4D::getZ()
{
    return content[2];
}
