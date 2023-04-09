#include<stdio.h>

int main()
{
     FILE *p;
     p=fopen("putingvalue.txt","w");
    putc('c',p);
     fclose(p);
return 0;
}
