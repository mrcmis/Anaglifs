#ifndef MATRIX4D_H
#define MATRIX4D_H

#include "Vector4D.h"


class Matrix4D
{
 public:
     Matrix4D();
    //wyświetlanie wartości
    double operator()(const unsigned int x, const unsigned int y);
    //ustawianie wartości
    void operator()(const unsigned int x, const unsigned int y, double value_to_set);
    //mnożenie macierzy
     Matrix4D operator*(const Matrix4D &);
     void toIdentity();
    friend Vector4D operator*(const Matrix4D &,const Vector4D &);
 private:
    double content[4][4];
};

#endif // MATRIX4D_H
