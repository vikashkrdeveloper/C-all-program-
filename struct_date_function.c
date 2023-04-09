#include<stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}date;
void display(date d){
printf("The date is %d/%d/%d ",d.day,d.month,d.year);
}
int main()
{
     date d={12,3,2023};
    display(d);
return 0;
}