#ifndef SEGMENT_H
#define SEGMENT_H
#include "Point.h"

class GUIMyFrame1;

//klasa odpowiedzialna za przechowywanie informacji odczytanych z pliku przez klasę GUIMyFrame1
class Segment
{
    friend class GUIMyFrame1;

    Point begin, end;
    Segment(Point _begin, Point _end) : begin(_begin), end(_end) {}
};

#endif // SEGMENT_H
