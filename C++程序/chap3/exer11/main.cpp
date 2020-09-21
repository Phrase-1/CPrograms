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
    void display(Date &);
};
class Date
{
    int year;
    int mouth;
    int day;
public:
    friend Time;
    Date(int y,int m,int d)
    {
        year=y;
        mouth=m;
        day=d;
    }
};
void Time::display(Date &d)
{
    cout<<d.year<<"/"<<d.mouth<<"/"<<d.day<<endl;
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
int main()
{
    Date d(2017,10,25);
    Time t(20,12,10);
    t.display(d);
    return 0;
}
