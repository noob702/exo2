#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED
#include <string>

class Cercle
{
    public:
        Cercle()=default;
        double perimeter(double r);
        double area(double r);
        double getRadius();
        void setRadius(double r);
       

    private:
        double radius;

};

#endif // RECTANGLE_H_INCLUDED
