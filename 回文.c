#include<stdio.h>
#include<string.h>
int main()
{
   void daozhi(char s[80]);
   char s[80],str[80];
   printf("����һ���ַ���:\n");

   gets(s);
   strcpy(str,s);
   daozhi(s);
   puts(s);
   if(strcmp(s,str)==0)
      printf(" �ǻ���");
   else
      printf("����");
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
