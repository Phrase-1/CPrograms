//Mn.123zyZ-->No.123azA
#include<stdio.h>
void fun(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            if(s[i]<90)
                s[i]=s[i]+1;
            if(s[i]==90)
                s[i]=s[i]%90+65;
        }                              /*y Y的变化有问题！？*/
        if(s[i]>='a'&&s[i]<='z')
        {
            if(s[i]<122)
                s[i]=s[i]+1;
            if(s[i]==122)
                s[i]=s[i]%122+97;
        }

    }
    puts(s);
}
void main()
{
    char s[80];
    printf("input some characters:");
    gets(s);
    fun(s);
}
