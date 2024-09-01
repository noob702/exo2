
#include <iostream>
#include <math.h>
#include<string>
#include "Rectangle.hpp"

 double Rectangle::perimeter(double L,double l)
 {
     return ((L+l)*2);
 }
 double Rectangle::area(double L,double l)
 {
    return(L*l);
 }
 double Rectangle::getLength()
 {
     return this->length;
 }
 double Rectangle::getWidth()
 {
     return this->width;
 }
void Rectangle::setLength(double length)
{
    this->length=length;
}
void Rectangle::setWidth(double width)
{

    this->width=width;
}


