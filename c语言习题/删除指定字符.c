#include<stdio.h>
#include<string.h>
fun(char str[],char del)
{
    int i,j;
    for(i=0;i<80;i++)
    {
        if(del==str[i])
        {
            str[i]="NUL";
        }
    }

}
void main()
{
    char str[80],del,str2[80];
    printf("����һ���ַ�:\n");
    gets(str);
    printf("����Ҫɾ�����ַ�:");
    del=getchar();
    fun(str,del);
    printf("ɾ��%c����ַ���Ϊ:\n%s",del,str);



}
