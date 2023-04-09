 #include<stdio.h>

int main()
{
     int i=45;
     int *a=&i;
     printf("The value of a is %d\n ",a) ;
     a++;  
     a++;  
     printf("The value of a is %d \n",a) ;
return 0;
}