
#include <iostream>
#include "Rectangle.hpp"
#include <string>
using namespace std;


int main()
{
    Rectangle box1;
    box1.setLength(5);
    box1.setWidth(5);

    cout << "Perimetre de box1 =" << box1.perimeter(box1.getLength(), box1.getWidth())
         << " et  surface de box1=" << box1.area(box1.getLength(), box1.getWidth()) << endl;

    return 0;
}
