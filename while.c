#include<stdio.h>
int main()
{
int i,num;
printf("\n enter any no.");
scanf("%d",&num);

i=2;
while(i<num)
{
if (num%i==0)
{
printf("\n not prime no.=%d",num);
break;
i++;
}
}
if (num==i)
printf("\n prime no=%d",num);
}
