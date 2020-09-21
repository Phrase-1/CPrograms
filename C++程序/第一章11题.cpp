//把字符串中的字符按逆序输出，要求使用string方法
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int h,i;
    char t;
    string str1;
    cout<<"input a word:"<<endl;
    cin>>str1;
    h=str1.size();//可测量长度
    for(i=0;i<h/2;i++)
    {
        t=str1[i];str1[i]=str1[h-1-i];str1[h-1-i]=t;
    }
    cout<<str1;
}
