#include<stdio.h>
int main()
{
int i,n,flag=0;
printf("\n enter any no");
scanf("%d",&n);

for(i=2;i<n;i++);
{
if(n%2==0)
{
 flag=1;
 
}

}


if(n==1)
{
printf("\n given number is not prime neither composite");
}
else if(flag==0)
{
printf("\n number is prime");
}
else
{
printf("\n number is not prime");
}





}
