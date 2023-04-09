 #include<stdio.h>
 float modulodivision();
 int main()
 {
     printf("%.2f",modulodivision());
 return 0;
 }
 float modulodivision(){
 int a,b,c;
    printf("enter the a number\nenter the b number\n");
    scanf("%d%d",&a,&b);
    return c=a%b;//(invalid expression a%b)
 }