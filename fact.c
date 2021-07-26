#include<stdio.h>
int main()
{
int n,i,f=0;
printf("\n enter any no");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
f=f*i;
printf("\n factor of %d=%d",n,f);
}
}
