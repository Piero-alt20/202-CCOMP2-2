#ifndef POINT_H
#define POINT_H
#include "Point.h"


class Point
{
    public:
        Point();
        Point(int _x, int_y);

        void print() const;
        void setPoint(int _x, int_y);

        virtual ~Point();
    private:
        int x;
        int y;
};

#endif // POINT_H
