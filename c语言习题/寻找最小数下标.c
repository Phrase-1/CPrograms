#include<stdio.h>
fun(int a[])//寻找最小数下标
{
    int t,i,j;
    for(j=0;j<=10;j++)
    {
        for(i=0;i<9;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }

    printf("sorted:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }

}
void main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a);


}
