//��3����������С�����˳������Ҫ��ʹ�ñ��������á�
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t;
    int &x=a,&y=b,&z=c;
    cout<<"input 3 numbers:"<<endl;
    cin>>a>>b>>c;
    if(x>y)
    {
        t=x;x=y;y=t;
    }
    if(z<x)
    {
        t=z;z=x;x=t;
    }
    else
    {
        if(z<y)
        {
            t=z;z=y;y=t;
        }
    }
    if(y>z)
    {
        t=y;y=z;z=t;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    return 0;
}
