#include <iostream>
#include <math.h>
#include<string>
#include "Rectangle.hpp"
#define pi=3.141592;

 double Cercle::perimeter(double r)
 {
     return (2*pi*r);
 }
 double Cercle::area(double r)
 {
    return(pi*r*r);
 }
 double Cercle::getRadius()
 {
     return this->radius;
 }
void Cercle::setRadius(double radius)
{
    this->radius=radius;
}
