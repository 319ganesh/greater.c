#include<stdio.h>
sum=0;
main()
{
int n,i;
printf("\n enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n %d",sum);
return 0;
}
