#include<stdio.h>
int main()
{
   char s[80],str[80];
   printf("����һ���ַ���:\n");
   gets(s);
   int i,l;
   char c[80];
   l=strlen(s);
   for(i=0;i<=l-1;i++)
   {
       s[l-1-i]=s[i];
   }
   s[l]='/0';
   strcpy(c,s);
   if(strcmp(c,s)==0)
     printf("%s �ǻ���",c);
}
