#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <string>

class Rectangle
{
    public:
        Rectangle()=default;
        double perimeter(double L,double l);
        double area(double L,double l);
        double getLength();
        double getWidth();
        void setLength(double length);
        void setWidth(double width);

    private:
        double length;
        double width;

};

#endif // RECTANGLE_H_INCLUDED
