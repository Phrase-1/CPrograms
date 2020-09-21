#include <iostream>

using namespace std;
class Complex
{
    double real;
    double imag;
public:
    Complex(){real=0;imag=0;}
    Complex(double r,double i):real(r),imag(i){}
    void display()
    {
        cout<<real;
        if(imag>0) cout<<"+"<<imag<<"i"<<endl;
        else if(imag<0) cout<<imag<<"i"<<endl;
    }
    Complex operator + (Complex &);
    Complex operator - (Complex &);
    Complex operator * (Complex &);
    Complex operator / (Complex &);
};
Complex Complex::operator+(Complex &c2)
{
    Complex c;
    c.real=real+c2.real;
    c.imag=imag+c2.imag;
    return c;
}
Complex Complex::operator-(Complex &c2)
{
    Complex c;
    c.real=real-c2.real;
    c.imag=imag-c2.imag;
    return c;
}
Complex Complex::operator*(Complex &c2)
{
    Complex c;
    c.real=real*c2.real-imag*c2.imag;
    c.imag=real*c2.imag+imag*c2.real;
    return c;
}
Complex Complex::operator/(Complex &c2)
{
    Complex c;
    c.real=(real*c2.real+imag*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag);
    c.imag=(imag*c2.real-real*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag);
    return c;
}
int main()
{
    Complex c1(1,2),c2(3,4),c3;
    c3=c1+c2;c3.display();
    c3=c1-c2;c3.display();
    c3=c1*c2;c3.display();
    c3=c1/c2;c3.display();
    return 0;
}
