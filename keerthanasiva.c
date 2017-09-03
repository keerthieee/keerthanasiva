#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a%4==0&&a%100!=0)
{
printf("given is a leap year");
}
else
{
printf("given is not a leap year");
}
}
