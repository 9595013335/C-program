#include<stdio.h>
int main()
{
int km,m,cm,mm;
printf("\nEnter the km");
scanf("%d",&km);
m=km*1000;
cm=m*100;
mm=cm*10;
printf("\nthe distance in meter is=%d",m);
printf("\nthe distance in cm is=%d",cm);
printf("\nthe distance in mm is=%d",mm);
 
 return 0;
 }
