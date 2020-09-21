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
    printf("ÊäÈëÒ»´®×Ö·û:\n");
    gets(str);
    printf("ÊäÈëÒªÉ¾µôµÄ×Ö·û:");
    del=getchar();
    fun(str,del);
    printf("É¾µô%cºóµÄ×Ö·û´®Îª:\n%s",del,str);



}
