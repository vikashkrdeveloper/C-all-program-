#include<stdio.h>
int funarray(){
    int num[11];
    for( int i=0; i<10; i++){
        printf("Enter the number\n");
        scanf("%d",&num[i]);
    }
  for (int i = 0; i <10; i++)
     {
     printf("%d\n",num[i]);
     }
}
int main()
{
     funarray();
return 0;
}