#include<stdio.h>
 char string(char ch[10]){
for ( int i = 0; i <10; i++)
{
   puts(ch);
}

 }
int main()
{
     char ch[10];
     printf("Enter the string\n");
     gets(ch);
     string(ch);
return 0;
}