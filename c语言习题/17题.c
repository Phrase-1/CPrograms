#include<stdio.h>
int fun(int a,int b)
{
    int c;
    c=(a/10)*1000+(a-(a/10)*10)*10+(b/10)+(b-(b/10)*10)*100;
        /*ǧλ*/      /*ʮλ*/     /*��λ*/   /*��λ*/
    return c;
}
void main()
{
    int a,b,c;
    printf("input a and b:");
    scanf("%d%d",&a,&b);
    c=fun(a,b);
    printf("%d",c);
}
