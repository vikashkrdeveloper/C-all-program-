#include<stdio.h>

int main()
{
     FILE *p;
     char c;
     p=fopen("readfgetc.txt","r");
     c=fgetc(p);
while ( c!=EOF){
printf("%c",c);
c=fgetc(p);
}
     fclose(p);
return 0;
}