#include<stdio.h>
int main()
{
int a,b,c;
printf("\n  enter the choice");
scanf("%d",&c);
switch (c)
{
case 1:
printf("enter the value of a&b");
scanf("%d%d",&a,&b);
if (a>b)
printf("\n  a is greater");
else
printf("\n  b is greater");
break;
case 2:
printf("enter the value of a  b ");
scanf("%d%d",&a,&b);
if(a=b)
printf("enter of a=b");
else
printf("enter of a not=b");
}

}

