#include<stdio.h>
#include<string.h>
void fun(char a[],int k,int n)//kΪָ�����±� nΪ��k��ʼɾ���ĸ���
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
    printf("kΪָ�����±� nΪ��k��ʼɾ���ĸ���\ninput k and n:\n");
    scanf("%d%d",&k,&n);
    fun(a,k,n);
}
