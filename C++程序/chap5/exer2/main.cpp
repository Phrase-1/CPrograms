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
        get_value();//������������Ĺ��г�Ա�����е���˽�м̳����Ļ����Ա����,ͨ������ʻ���˽�����ݳ�Ա
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
