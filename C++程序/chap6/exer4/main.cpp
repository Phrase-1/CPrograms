#include <iostream>
using namespace std;
class Shape
{
public:
    virtual float printArea()=0;
};
class Circle:public Shape//Ô²
{
private:
    float r;
public:
    Circle(float r):r(r){}
    float printArea();
};
class Rectangle:public Shape//¾ØÐÎ
{
private:
    float length;
    float width;
public:
    Rectangle(float l,float w):length(l),width(w){}
    float printArea();
};
class Triangle:public Shape//Èý½ÇÐÎ
{
private:
    float height;
    float bottom;
public:
    Triangle(float h,float b):height(h),bottom(b){}
    float printArea();
};
float Circle::printArea()
{
    return (3.14*r*r);
}
float Rectangle::printArea()
{
    return (length*width);
}
float Triangle::printArea()
{
    return (bottom*height*0.5);
}
int main()
{
    Shape *pt;
    Circle c(1.5);
    Rectangle r(5,4);
    Triangle t(2,8);
    pt=&c;
    cout<<pt->printArea()<<endl;
    pt=&r;
    cout<<pt->printArea()<<endl;
    pt=&t;
    cout<<pt->printArea()<<endl;
    return 0;
}
