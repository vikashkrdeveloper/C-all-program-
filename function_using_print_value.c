#include <stdio.h>
void fun(int i){
    printf(" the address ofvariable i is %u \n",&i);

}
int main()
{
    int j = 7;
    printf(" the value ofvariable j is %u \n",j);
    fun(j);
    printf(" the address ofvariable j is %u \n",&j);
    return 0;
}