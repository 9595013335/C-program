#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("\n enter the range");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d +", i);
sum= sum+i;
}
printf("\n sum of range=%d",sum);

}

