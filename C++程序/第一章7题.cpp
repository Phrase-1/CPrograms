//求2个或3个正整数中的最大数，用带有默认参数的函数实现
#include<iostream>
using namespace std;

int main()
{
    int max(int a,int b,int c=0);
    int x,y,z,h;
    cout<<"Please choose 2 or 3:";
    cin>>h;
    if(h==2)
    {
        cout<<"input 2 numbers:"<<endl;
        cin>>x>>y;
        cout<<"max="<<max(x,y);
    }
    else if(h==3)
    {
        cout<<"input 3 numbers:"<<endl;
        cin>>x>>y>>z;
        cout<<"max="<<max(x,y,z);
    }
    return 0;
}
int max(int a,int b,int c=0)
{
    int z;
    if(a>b)
        z=a;
    else z=b;
    if(z>c)
        return z;
    else return c;
}
