//��5���ַ���Ҫ������ǰ���С����˳�����У���string����
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j;
    string str[5];
    string temp;
    cout<<"input 5 strings:"<<endl;
    for(i=0;i<5;i++)
        cin>>str[i];
    for(i=0;i<5;i++)
        for(j=0;j<5-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
        cout<<"sort small to big:"<<endl;
        for(i=0;i<5;i++)
            cout<<str[i]<<" ";
}
