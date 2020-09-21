#include <iostream>
#include<string>
using namespace std;
class Student
{
    string num;
    int score;
public:
    void set_s()
    {
        cin>>num>>score;
    }
    void print_s()
    {
        cout<<num<<score<<endl;
    }
};
int main()
{
    void set_s(Student*);
    void print_s(Student*);
    Student s[5];
    Student *pt;
    pt=s;
    Student *p;
    p=pt;
    int i;
    for(i=0;i<5;i++)
    {
        pt->set_s();
        pt++;
    }
    pt=p;
    for(i=0;i<5;i+=2)
    {
        pt->print_s();
        pt+=2;
    }
    return 0;
}
