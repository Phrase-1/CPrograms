#include<iostream>
#include"point.h"
#include"circle.h"
using namespace std;
class Cylinder:public Circle
{
protected:
    float height;
public:
    Cylinder(float a=0,float b=0,float r=0,float h=0);
    void setHeight(float);
    float getHeight()const;
    float area()const;
    float volume()const;
    friend ostream & operator<<(ostream &,const Cylinder &);
};
