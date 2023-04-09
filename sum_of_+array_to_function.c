 #include<stdio.h>
 int sumarray(int *num){
return *num+*num+1+*num+2;
 }
 int main()
 {
     int arr[3]={4,5,6},call;
call=sumarray(arr);
     
printf("%d\n",call);
 return 0;
 }
