#include <iostream>

using namespace std;
class Complex
{
    double real;
    double imag;
public:
    Complex(){real=0;imag=0;}
    Complex(double r,double i):real(r),imag(i){}
    friend Complex add(Complex &,Complex &);
    void display()
    {
        cout<<real<<"  "<<imag<<endl;
    }
};
Complex operator + (Complex &c1,Complex &c2)
{
    Complex c;
    c=add(c1,c2);
    return c;
}
Complex add(Complex &c1,Complex &c2)
{
    Complex c;
    c.real=c1.real+c2.real;
    c.imag=c1.imag+c2.imag;
    return c;
}

int main()
{
    Complex c1(1,2),c2(3,4),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
