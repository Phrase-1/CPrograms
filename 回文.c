#include<stdio.h>
#include<string.h>
int main()
{
   void daozhi(char s[80]);
   char s[80],str[80];
   printf("输入一个字符串:\n");

   gets(s);
   strcpy(str,s);
   daozhi(s);
   puts(s);
   if(strcmp(s,str)==0)
      printf(" 是回文");
   else
      printf("不是");
}

void daozhi(char s[80])
{
   int i,l;
   char c;
   l=strlen(s);
   for(i=0;i<l/2;i++)
   {
      c=s[i];
      s[i]=s[l-1-i];
      s[l-1-i]=c;
   }
  // s[l]='/0';

}
