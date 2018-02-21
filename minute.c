#include<stdio.h>
main()
{
int minutes,hour,b,a;
printf("\n enter the equal value for one hour in minutes:");
scanf("%d",&a);
printf("\n enter the minutes:");
scanf("\t %d",&minutes);
if(minutes>=60)
{
printf("\n hours and minutes are:");
hour=minutes/a;
printf("\n the hour is:%d",hour);
b=minutes%a;
printf("\n the minutes is:%d",b);
printf("\n%d\t%d",hour,b);
}
else
{
printf("\n minutes is:");
printf("%d",minutes);
}
return 0;
}




