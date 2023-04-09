#include <stdio.h>
void printddress(int a,int b,int c,int d,int e,int f,int j)
{
    
    printf("the address of k : %u\n ", &a);
    printf("the address of i : %u\n ", &b);
    printf("the address of m: %u\n ", &c);
    printf("the address of j : %u\n ", &d);
    printf("the address of n : %u\n ", &e);
    printf("the address of b : %u\n ", &f);
    printf("the address of l : %u\n ", &j);
}
int main()
{
    int i=78;
    int m=89,n=90,*b=&n,l=67;
    int *k=&m;
    int *j=&i;
    printf("the address of j : %u\n ", &j);
    printf("the value of j : %d\n ", j);
    printddress(*k,i,m,*j,n,*b,l);
    printf("the value of i : %d\n ",i);
 
    return 0;
}