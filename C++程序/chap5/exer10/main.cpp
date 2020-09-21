#include <iostream>
#include<string>
using namespace std;
class Teacher
{
    int num;
    string name;
    string sex;
public:
    Teacher(int n,string na,string se){num=n,name=na,sex=se;}
    void Teac_display();
};
class BirthDate
{
    int year;
    int month;
    int day;
public:
    void set_birth(int &,int &,int &);
    void bir_display();
};
class Professor:public Teacher
{
private:
    BirthDate birthday;
public:
    Professor(int n,string na,string se,int y,int m,int d):Teacher(n,na,se){birthday.set_birth(y,m,d);}
    void reset_birth();
    void Pro_display();
};
void Teacher::Teac_display()
{
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
}
void BirthDate::set_birth(int &y,int &m,int &d)
{
    year=y;
    month=m;
    day=d;
}
void BirthDate::bir_display()
{
    cout<<"birthday:"<<year<<"."<<month<<"."<<day<<endl;
}
void Professor::Pro_display()
{
    Teac_display();
    birthday.bir_display();
}
void Professor::reset_birth()
{
    int y,m,d;
    cout<<"reset the birthday:"<<endl;
    cin>>y>>m>>d;
    birthday.set_birth(y,m,d);
}
int main()
{
    Professor prof1(1,"wang","m",1998,11,28);
    prof1.Pro_display();
    prof1.reset_birth();
    prof1.Pro_display();
    return 0;
}
