#include <iostream>

using namespace std;
class Student
{
    int num;
    string name;
    string sex;
public:
    void get_value()
    {
        cin>>num>>name>>sex;
    }
    void display()
    {
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
    }
};
class Student1:public Student
{
    int age;
    string addr;
public:
    void get_value_1()
    {
        cin>>age>>addr;
    }
    void display_1()
    {
        cout<<"age:"<<age<<endl;
        cout<<"address:"<<addr<<endl;
    }
};
int main()
{
    Student1 s;
    s.get_value();
    s.get_value_1();
    s.display();
    s.display_1();
    return 0;
}
