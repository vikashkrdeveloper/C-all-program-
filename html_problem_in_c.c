#include<stdio.h>
#include<stdlib.h>
void tage(char tag[]){
puts(tag);
}
int main()
{
     char ch[]="<h1> This is a heading tag</h1>";
     tage(ch);
return 0;
}