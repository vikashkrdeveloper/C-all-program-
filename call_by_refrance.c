#include <stdio.h>
void swap(int *a,int *b);
// void wrongswap(int a,int b);
int main()
{
    int x = 7, y = 9, c;
    printf(" the value of x and y before swap %dand %d\n", x,y);
    // wrongswap(x,y);//not work call by value
    swap(&x,&y);//work call by refrance
    printf(" the value of x and y after swap %d and %d\n", x,y);
    return 0;
}
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    
}
// void wrongswap(int a,int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;


// }