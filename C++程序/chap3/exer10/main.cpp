#include <iostream>
using namespace std;
class Date;
class Time
{
    int hour;
    int minute;
    int sec;
public:
    Time(int h,int m,int s)
    {
        hour=h;
        minute=m;
        sec=s;
    }
    friend void display(Date &,Time &);
};
class Date
{
    int year;
    int mouth;
    int day;
public:
    friend void display(Date &,Time &);
    Date(int y,int m,int d)
    {
        year=y;
        mouth=m;
        day=d;
    }
};
void display(Date &d,Time &t)
{
    cout<<d.year<<"/"<<d.mouth<<"/"<<d.day<<endl;
    cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}
int main()
{
    Date d(2017,10,25);
    Time t(20,12,10);
    display(d,t);
    return 0;
}
