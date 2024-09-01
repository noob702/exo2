#include <iostream>
#include "Triangle.hpp"
#include <string>
using namespace std;
using namespace std;

int main()
{

    Triangle T;
    T.setC1(5);
    T.setC2(5);
    T.setC3(1);

    cout << "Perimetre de T = " << T.perimeter(T.getC1(),T.getC2(),T.getC3())
         << " et  surface de T=" << T.area(T.getC1(),T.getC2(),T.getC3()) << endl;

    return 0;

}
