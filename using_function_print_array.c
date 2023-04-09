 #include<stdio.h>
void fun(int *a,int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(a+i));
    }
    
    }
int main()
 {
int arr[]={12,34,56,77,22,244,56,76,45,87} ;
fun(arr,10);


return 0;
}