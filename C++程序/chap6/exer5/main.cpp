#include <iostream>
using namespace std;
class Shape
{
public:
    virtual float printArea()=0;
};

class Circle:public Shape//Բ
{
private:
    float r;
public:
    Circle(float r):r(r){}
    float printArea();
};
float Circle::printArea()
{
    return (3.14*r*r);
}

class Square:public Shape//������
{
private:
    float length;
public:
    Square(float l):length(l){}
    float printArea();
};
float Square::printArea()
{
    return (length*length);
}

class Rectangle:public Shape//����
{
private:
    float length;
    float width;
public:
    Rectangle(float l,float w):length(l),width(w){}
    float printArea();
};
float Rectangle::printArea()
{
    return (length*width);
}

class Trapezoid:public Shape//����
{
private:
    float upb;//�ϵ�
    float downb;//�µ�
    float height;
public:
    Trapezoid(float u,float d,float h):upb(u),downb(d),height(h){}
    float printArea();
};
float Trapezoid::printArea()
{
    return ((upb+downb)*height*0.5);
}

class Triangle:public Shape//������
{
private:
    float height;
    float bottom;
public:
    Triangle(float h,float b):height(h),bottom(b){}
    float printArea();
};
float Triangle::printArea()
{
    return (bottom*height*0.5);
}

int main()
{
    Shape *s[5];
    Circle c(2);Square sq(3);Rectangle r(4,5);Trapezoid tra(6,7,8);Triangle tri(9,10);
    s[0]=&c;s[1]=&sq;s[2]=&r;s[3]=&tra;s[4]=&tri;
    float sum=0;
    for(int i=0;i<5;i++)
    {
        cout<<s[i]->printArea()<<endl;
        sum+=s[i]->printArea();
    }
    cout<<"all="<<sum<<endl;
    return 0;
}
