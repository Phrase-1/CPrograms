#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
        return b;
    else return a;
}
void fun(int tt[][3])//�β���ҲҪ������ά���������
{
    int pp[3],i,j;//i�����У�j�����С�
    for(i=0,j=0;j<3;j++)
    {
        pp[j]=min(tt[i][j],tt[i+1][j]);
        printf("%d  ",pp[j]);
    }
}
void main()
{
    int tt[2][3]={1,6,3,2,5,4};//2��3�У���3����Сֵ
    fun(tt);
}
