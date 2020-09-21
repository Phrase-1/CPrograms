#include<iostream>
#include"point.h"
using namespace std;
Point::Point(float a,float b)
{
    x=a;y=b;
}
float Point::setPoint(float a,float b)
{
    x=a;y=b;
}
ostream & operator<<(ostream &output,const Point &p)
{
    output<<"["<<p.x<<","<<p.y<<"]"<<endl;
    return output;
}
