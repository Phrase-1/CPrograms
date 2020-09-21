#include <iostream>

using namespace std;
class Complex
{
    double real;
    double imag;
public:
    Complex(){real=0;imag=0;}
    Complex(double r,double i){real=r;imag=i;}
    void display();
    Complex(int i){real=double(i);imag=0;}
    Complex operator + (Complex &);
    Complex operator + (int &);
    friend Complex operator + (int &,Complex &);
};
void Complex::display()
{
    cout<<real;
    if(imag>0) cout<<"+"<<imag<<"i"<<endl;
    if(imag<0) cout<<imag<<"i"<<endl;
}
Complex Complex::operator+(Complex &c2)
{
    Complex c;
    c.real=real+c2.real;
    c.imag=imag+c2.imag;
    return c;
}
Complex Complex::operator+(int &i)
{
    return Complex(real+i,imag);
}
Complex operator+(int &i,Complex &c1)
{
    Complex c;
    c.real=c1.real+double(i);
    c.imag=c1.imag;
    return c;
}
int main()
{
    Complex c1(1,2),c2(3,4),c3;
    int i=1;
    c3=c1+c2;c3.display();
    c3=i+c1;c3.display();
    c3=c2+i;c3.display();
    return 0;
}
