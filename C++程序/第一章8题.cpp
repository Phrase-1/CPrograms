//�������������������ǰ��ɴ�С��˳�������Ҫ��ʹ�ñ��������á�
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int &x=a,&y=b;
    cout<<"input 2 numbers:"<<endl;
    cin>>x>>y;
    if(a>=b)
        cout<<x<<" "<<y;
    else cout<<b<<" "<<a;
    return 0;
}
