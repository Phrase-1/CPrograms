#include <iostream>
using namespace std;
class Student
{
protected:
    int num;
    string name;
    string sex;
public:
};
class Student1:protected Student
{
private:
    int age;
    string addr;
public:
    void get_value_1();
    void display_1();
};
void Student1::get_value_1()
{
    cin>>num>>name>>sex;
    cin>>age>>addr;
}
void Student1::display_1()
{
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"address:"<<addr<<endl;
}
int main()
{
    Student1 s;
    s.get_value_1();
    s.display_1();
    return 0;
}
