
#include <iostream>
#include "Rectangle.hpp"
#include <string>
using namespace std;


int main()
{
    Cercle C;
    C.setRadius(5);
    cout << "Perimetre de C=" << C.perimeter(C.getRadius())
         << " et  surface de C=" << C.area(C.getRadius()) << endl;

    return 0;
}
