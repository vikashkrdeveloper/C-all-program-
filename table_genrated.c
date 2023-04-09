#include<stdio.h>

int main()
{
     FILE *ptr;
     ptr=fopen("table.txt","w"); 
     int num;
     printf("Enter the table\n");
     scanf("%d",&num);
     for ( int i = 0; i <10; i++)
     {
        fprintf(ptr,"%d X %d = %d\n",num,i+1,(i+1)*num);
     }
     fclose(ptr);
     printf("Succesfully table genrated %d ",num);
return 0;
}