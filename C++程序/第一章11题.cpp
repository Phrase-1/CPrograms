//���ַ����е��ַ������������Ҫ��ʹ��string����
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
    h=str1.size();//�ɲ�������
    for(i=0;i<h/2;i++)
    {
        t=str1[i];str1[i]=str1[h-1-i];str1[h-1-i]=t;
    }
    cout<<str1;
}
