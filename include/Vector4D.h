#ifndef VECTOR4D_H
#define VECTOR4D_H

class Matrix4D;

class Vector4D
{
    friend Vector4D operator*(const Matrix4D &, const Vector4D &);
 public:
     Vector4D(const double x, const double y, const double z);
     void setVector(double x,double y,double z);
     double getX();
     double getY();
     double getZ();
 private:
    double content[4];
};

#endif // VECTOR4D_H
