#include<stdio.h>
void main()
{
int e,a,j,g;
float b,c,d;
printf("Press:");
printf("\n1 to ADD");
printf("\n2 to SUBTRACT");
printf("\n3 to MULTIPLY");
printf("\n4 to DIVIDE");
printf("\n5 to MODULAS\n");
scanf("%d",&a);
if(a>0 && a<6)
{
printf("\nEnter Two Numbers:");
scanf("%f %f",&b,&c);

switch(a)
{
case 1:
d=b+c;
printf("\nSum:%0.1f",d);
break;

case 2:
d=b-c;
printf("\nDiffrence:%0.1f",d);
break;

case 3:
d=b*c;
printf("\nProduct:%0.1f",d);
break;

case 4:
d=b/c;
printf("\nDivision:%0.1f",d);
break;

case 5:
e=(int)b%(int)c;
printf("\nModulas:%d",e);
break;
}

}

else
printf("Enter a valid number");

}
