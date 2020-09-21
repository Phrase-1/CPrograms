//可以先转置再比较每行的最小值
#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
        return b;
    else return a;
}
void fun(int tt[][3])//形参中也要标明二维数组的列数
{
    int pp[3],i,j;//i控制行，j控制列。
    for(i=0,j=0;j<3;i++)
    {
        pp[j]=min(tt[i][j],tt[i+1][j]);
        printf("%d  ",pp[j]);
    }
}
void main()
{
    int tt[3][3]={1,2,3,4,5,6,7,8,9};//3行3列，有3个最小值
    fun(tt);
}
