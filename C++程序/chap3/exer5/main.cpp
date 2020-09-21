#include <iostream>

using namespace std;
class Student
{
    char num;
    float score;
public:
    friend void max(Student *);
    void set()
    {
        cin>>num>>score;
    }
};
void max(Student *pt)//返回类型要在类名前面！！
{
    Student *temp;
    int i;
    temp=pt;
    pt++;
    for(i=1,pt,temp;i<5;pt++,i++)
    {
        if(temp->score<pt->score)
            {
                temp->score=pt->score;
                temp++;
            }
    }
    cout<<temp->num;
}
int main()
{
    Student s[5],*pt;
    pt=s;
    int i;
    for(pt,i=0;i<5;pt++,i++)
    {
        cout<<"set student"<<i+1<<":"<<endl;
        pt->set();
    }
    pt=s;
    max(pt);
    return 0;
}
