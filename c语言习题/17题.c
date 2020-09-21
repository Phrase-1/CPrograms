#include<stdio.h>
int fun(int a,int b)
{
    int c;
    c=(a/10)*1000+(a-(a/10)*10)*10+(b/10)+(b-(b/10)*10)*100;
        /*千位*/      /*十位*/     /*个位*/   /*百位*/
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
