#include<stdio.h>
#include<string.h>
void fun(char a[],int k,int n)//k为指定的下标 n为从k开始删除的个数
{
    for(k;a[k]!='\0';k++)
    {
        a[k]=a[k+n];
    }
    puts(a);
}
void main()
{
    char a[80];
    int k,n;
    printf("input some characters:\n");
    gets(a);
    printf("k为指定的下标 n为从k开始删除的个数\ninput k and n:\n");
    scanf("%d%d",&k,&n);
    fun(a,k,n);
}
