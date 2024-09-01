#include <iostream>
#include <math.h>
#include<string>
#include "Triangle.hpp"

 double Triangle::perimeter(double c1,double c2,double c3)
 {
     return (c1+c2+c3);
 }
 double Triangle::area(double c1,double c2,double c3)
 {
     double s=(c1+c2+c3)/2;

    return sqrt((s-c1)*(s-c2)*(s-c3));
 }
 double Triangle::getC1()
 {
     return this->c1;
 }
 double Triangle::getC2()
 {
     return this->c2;
 }
 double Triangle::getC3()
 {
     return this->c3;
 }
void Triangle::setC1(double c1)
{
    this->c1=c1;
}
void Triangle::setC2(double c2)
{

    this->c2=c2;
}
void Triangle::setC3(double c3)
{

    this->c3=c3;
}
