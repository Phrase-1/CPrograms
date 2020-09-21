//输入两个整数，将它们按由大到小的顺序输出。要求使用变量的引用。
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
