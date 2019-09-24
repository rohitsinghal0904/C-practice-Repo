#include<stdio.h>
void main()
{
int m;
printf("Enter the Month no.:");
scanf("%d",&m);
switch (m)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
printf("This Month contains 31 days");
break;
case 4:
case 6:
case 9:
case 11:
printf("This Month contains 30 days ");
break;
case 2:
printf("This Month contains 28 days it is not a leap year");
break;
default:
printf("Invalid Month");
break;
}
}



