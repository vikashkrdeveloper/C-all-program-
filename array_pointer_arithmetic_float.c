 #include<stdio.h>

int main()
{
     float i=45.6;
     float *a=&i;
     printf("The value of a is %u\n ",a) ;
     a++;  
     printf("The value of a is %u \n",a) ;
return 0;
}