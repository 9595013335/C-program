#include<stdio.h>
int main()
{
int n,i;
double arr[10];

printf("\n enter the no of element (1-10)-");
scanf("%d",&n);

for(i=0 ; i<n ; i++)
{
printf("\n enter no %d=",i+1);
scanf("%lf",&arr[i]);
}
for (i=1 ; i<n ; i++)
{
if(arr[0]<arr[i])
{
arr[0]=arr[i];
}
}
printf("\n largest no =%.lf",arr[0]);
return 0;
}
