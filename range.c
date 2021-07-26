#include <stdio.h>
int main()
{
int n,i,sum=0,t;
printf("\n enter the range");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
t=2*i-1;
if(i%2==0)
{
printf("\n %d+",-t);
sum=sum+(-t);

}
else
{
printf("\n%d",t);
sum=sum+t;
}
}
printf("\n the sum =%d",sum);
}
