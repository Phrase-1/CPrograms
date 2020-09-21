//统计字符个数
#include<stdio.h>
int main()
{
    printf("input some characters\npush enter to count\n");
    int number=0,letter=0,space=0,other=0;
    char ch;
    while((ch=getchar())!='\n')
    {
        if(ch>='0'&&ch<='9') number++;
        else if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z') letter++;
        else if(ch==' ') space++;
        else other++;
    }
    printf("number:%d\nletter:%d\nspace:%d\nother:%d\n",number,letter,space,other);
    return 0;



}
