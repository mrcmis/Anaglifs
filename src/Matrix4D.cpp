#include "Matrix4D.h"

Matrix4D::Matrix4D()
{
    for(int i = 0 ; i < 4 ; i++)
        for(int j = 0 ; j < 4 ; j++)
            content[i][j] = 0;

    content[0][0] = 1;
    content[1][1] = 1;
    content[2][2] = 1;
    content[3][3] = 1;
}

double Matrix4D::operator()(const unsigned int x, const unsigned int y)
{
    return content[x][y];
}

void Matrix4D::operator()(const unsigned int x, const unsigned int y, double value_to_set)
{
    content[x][y] = value_to_set;
}

Matrix4D Matrix4D::operator* (const Matrix4D & matrix)
{
    Matrix4D matrix_result;

    for(unsigned int i = 0 ; i < 4 ; i++)
        for(unsigned int j = 0 ; j < 4 ; j++)
        {
            matrix_result.content[i][j] = 0.0;
            for(unsigned int k = 0 ; k < 4 ; k++)
                matrix_result.content[i][j] += content[i][k] * matrix.content[k][j];
                //matrix_result.content[i][j] = matrix_result.content[i][j] + (content[i][k] * matrix.content[k][j]);
        }
    return matrix_result;
}

void Matrix4D::toIdentity()
{
    for(unsigned int i = 0 ; i < 4 ; i++)
        for(unsigned int j = 0 ; j < 4 ; j++)
            if(i == j)
                content[i][j] = 1;
            else
                content[i][j] = 0;
}

//OPERATOR GLOBALNY
Vector4D operator* (const Matrix4D & matrix,  const Vector4D & vector4)
{
 Vector4D vector_result(0, 0, 0);

 for(unsigned int i=0 ; i<4 ; i++)
  {
    vector_result.content[i] = 0.0;
    for(unsigned int j=0 ; j<4 ; j++)
        vector_result.content[i] = vector_result.content[i] + (matrix.content[i][j] * vector4.content[j]);
  }
 return vector_result;
}
