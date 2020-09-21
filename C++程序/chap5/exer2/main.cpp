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
class Student1:private Student
{
    int age;
    string addr;
public:
    void get_value_1()
    {
        get_value();//可以在派生类的共有成员函数中调用私有继承来的基类成员函数,通过其访问基类私有数据成员
        cin>>age>>addr;
    }
    void display_1()
    {
        display();
        cout<<"age:"<<age<<endl;
        cout<<"address:"<<addr<<endl;
    }
};
int main()
{
    Student1 s;
    s.get_value_1();
    s.display_1();
    return 0;
}
