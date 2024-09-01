#ifndef TRIANGLE_HPP_INCLUDED
#define TRIANGLE_HPP_INCLUDED
class Triangle
{
    public:
        Triangle()=default;
        double perimeter(double c1,double c2,double c3);
        double area(double c1,double c2,double c3);
        double getC1();
        double getC2();
        double getC3();
        void setC1(double getC1);
        void setC2(double getC2);
        void setC3(double getC3);

    private:
        double c1;
        double c2;
        double c3;

};


#endif // TRIANGLE_HPP_INCLUDED
