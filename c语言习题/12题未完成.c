//在数字前加$符号
#include<stdio.h>
void fun(char s[])
{
    int i,j;
    char s2[80];
    for(i=0,j=0;s[i]!='\0';i++)
    {

        s2[j]=s[i];
        if(s[i]>='1'&&s[i]<='9')

    }

}
void main()
{
    char s[80];
    printf("input some characters include numbers:\n");
    gets(s);
    fun(s);
}
