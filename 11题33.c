//������ת���ٱȽ�ÿ�е���Сֵ
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
    for(i=0,j=0;j<3;i++)
    {
        pp[j]=min(tt[i][j],tt[i+1][j]);
        printf("%d  ",pp[j]);
    }
}
void main()
{
    int tt[3][3]={1,2,3,4,5,6,7,8,9};//3��3�У���3����Сֵ
    fun(tt);
}
