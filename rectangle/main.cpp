
#include <iostream>
#include "Rectangle.hpp"
#include <string>
using namespace std;


int main()
{
    Rectangle box1;
    box1.setLength(5);
    box1.setWidth(5);

    cout << "Perimeter et surface du rectangle = " << box1.perimeter(box1.getLength(), box1.getWidth())
         << " et " << box1.area(box1.getLength(), box1.getWidth()) << endl;

    return 0;
}
