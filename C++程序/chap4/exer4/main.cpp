#include <iostream>
using namespace std;
class Matrix
{
    int array[2][3];
public:
    void display();
    void set();//也可用构造函数赋初值
    friend Matrix operator+(Matrix &a,Matrix &b);
};

Matrix operator+(Matrix &a,Matrix &b)
{
    int i,j;
    Matrix m;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            m.array[i][j]=a.array[i][j]+b.array[i][j];
        }
    }
    return m;
}
void Matrix::set()
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>array[i][j];
        }
    }
}
void Matrix::display()
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    Matrix a,b,c;
    cout<<"input a"<<endl;a.set();
    cout<<"input b"<<endl;b.set();
    c=a+b;
    cout<<"a+b="<<endl;c.display();
    return 0;
}
