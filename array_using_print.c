#include<stdio.h>
int funarray(){
    int num[11],c;
    for( int i=0; i<10; i++){
        printf("Enter the number\n");
        scanf("%d",&num[i]);
        c=num[i];
    }
    return c;
}
int main()
{
    int c=funarray();
     for (int i = 0; i <10; i++)
     {
     printf("%d\n",c);
     }
     
return 0;
}