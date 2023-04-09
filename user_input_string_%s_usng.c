#include<stdio.h>

int main()
{
    char str[34];
    char strn[34];
    int i=0;
    char c;
    printf("Enter the value of first string\n");
    scanf("%d",str);
    printf("Enter the value of second string charater\n");
    // fflush(stdin);
    // c=scanf("%c",&c); 
    while (c!='\n')
    {
    fflush(stdin);
    scanf("%c",&c);
        strn[i]=c;
        i++;
    }
    strn[i]='\0';
    printf("The value of str is %s",str);
    printf("The value of strn is %s",strn);
    
return 0;
}