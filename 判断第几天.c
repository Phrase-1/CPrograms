//输入某年某月某日，判断这是这一年的哪一天？
//闰年为特殊情况
#include<stdio.h>
int runnian(int,int,int);
int days(int,int,int);
int main()
{
    int Y,M,D;
    printf("please input Y M D:");
    scanf("%d%d%d",&Y,&M,&D);
    runnian(Y,M,D);
    return 0;
}
int runnian(int Y,int M,int D)//判断闰年
{
    if(Y%4==0&&Y%100!=0||Y%400==0)
        frndays(Y,M,D);
    else rndays(Y,M,D);
    return 0;
}
int frndays(int Y,int M,int D)//计算非闰年天数
{
    int day;
    if(M<=2)
        if(M%2==0)
        day=M/2*31+D;
        else day=D;
    else
    {
        if(M%2==0)
            day=M/2*31+(M/2-2)*30+29+D;
        else day=M/2*31+(M/2-1)*30+29+D;
    }
    printf("这是%d年的第%d天",Y,day);
    return 0;
}
int rndays(int Y,int M,int D)//计算闰年天数
{
    int day;
    if(M<=2)
        if(M%2==0)
        day=M/2*31+D;
        else day=D;
    else
    {
        if(M%2==0)
            day=M/2*31+(M/2-1)*30+D;
        else day=M/2*31+(M/2)*30+D;
    }
    printf("这是%d年的第%d天",Y,day);
    return 0;
}
