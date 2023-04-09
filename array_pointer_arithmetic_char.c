 #include<stdio.h>

int main()
{
     char i='b';
     char *a=&i;
     printf("The value of a is %u\n ",a) ;
     a++;  
     printf("The value of a is %u \n",a) ;
return 0;
}