#include<stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}date;
void display(date d,date c){
printf("The date is %d/%d/%d\n ",d.day,d.month,d.year);
printf("The date is %d/%d/%d\n ",c.day,c.month,c.year);
}
int datemp(date d1,date d2){
if (d1.year>d2.year)
{
   return 1;
}
if (d1.year<d2.year)
{
   return -1;
}
if (d1.month>d2.month)
{
   return 1;
}
if (d1.month<d2.month)
{
   return -1;
}
if (d1.day>d2.day)
{
   return 1;
}
if (d1.day<d2.day)
{
   return -1;
}
return 0;

}
int main()
{
     date d1={12,3,2023};
     date d2={1,3,2023};
    display(d1,d2);
    int a=datemp(d1,d2);
    printf("%d",a);
return 0;
}