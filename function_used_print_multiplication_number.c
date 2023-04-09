#include<stdio.h>
void table(int *p,int n,int y){
    for (int i = 1; i <=y; i++)
    {
      p[i]=n*i;

    }
    for (int i = 1; i <=y; i++)
    {
     printf("%d\t",p[i]);
      
    } 
    
      printf("\t\n");
}
int main()
{
    int arr[3][10];
    table(arr[0],3,10);
    table(arr[1],4,10);
    table(arr[2],5,10);
    table(arr[3],6,10);
    table(arr[4],7,10);
    table(arr[5],8,10);
    table(arr[6],9,10);
    table(arr[7],10,10);
    table(arr[8],11,10);
return 0;
}