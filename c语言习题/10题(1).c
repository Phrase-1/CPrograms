//��д��ĸת��һ��Сд��ĸ����дZתΪz
#include<stdio.h>
void fun(char s[])
{
    int i;
    for(i=1;s[i]!='\0';i+=2)
    {
        if(s[i]>='A'&&s[i]<'Z')
            s[i]+=33;
        if(s[i]=='Z')
            s[i]='z';

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
