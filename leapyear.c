#include<stdio.h>
void main()
{
int n;
printf("ENTER THE YEAR\n");
scanf("%d",&n);
if(n%4==0)
printf("LEAP YEAR\n");
else if((n%100==0)&&(n%400==0))
printf("LEAP YEAR\n");
else
printf("NOT A LEAP YEAR");
}
