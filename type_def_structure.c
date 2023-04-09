#include<stdio.h>
typedef struct complex{
    int x;
    int y;
}comp;
void complex(comp c){
    printf("The value of real part %d\n",c.x);
    printf("The value of complex part %d\n",c.y);
}
int main()
{
     comp arr[5];
    for(int i=0; i<=5; i++){
        printf("Enter the real value");
        scanf("%d",&arr[i]);
        printf("Enter the complex value");
        scanf("%d",&arr[i]);
     } 
    for(int i=0; i<=5; i++){
  complex(arr[i]);
     } 
return 0;
}