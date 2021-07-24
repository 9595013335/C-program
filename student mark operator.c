#include<stdio.h>
int main()
{
float m1,m2,m3,m4,m5,per;

printf("\n enter mark of 5 subject");

scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

per=(m1+m2+m3+m4+m5)/5;

if(per>=75)
printf("\n grade A+");

else if(per<75 && per>=60)
printf("\n grade A");

else if(per<60 && per>=45)
printf("\n grade B");

else if(per<45 && per>=35)
printf("\n grade C");

else
printf("\n fail");

return 0;
}
