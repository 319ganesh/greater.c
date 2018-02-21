#include<stdio.h>
main()
{
int a,b;
int minutes,minutes1;
int hour,hour1;
printf("\n enter the hour:");
scanf("\n %d",&hour);
printf("\n enter the minutes:");
scanf("\t %d",&minutes);
printf("\n%d\t%d",hour,minutes);
printf("\n enter the hour:");
scanf("\n %d",&hour1);
printf("\n enter the minutes:");
scanf("\t %d",&minutes1);
printf("\n%d\t%d",hour1,minutes1);
printf("\n total hour is:");
a=hour-hour1;
printf("\n total minutes is:");
b=minutes-minutes1;
printf("\n%d\t%d",a,b);
return 0;
}
