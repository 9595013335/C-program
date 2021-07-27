#include<stdio.h>
int main()
{
int i,j;
char ch = '*';

/*
for(i=1;i<=10;i++)
{
for(j=1;j<=i;j++)
{
printf(" %c", ch);
}
printf("\n \n");
}
*/


for(i=10;i>=0;i--)
{
for(j=0;j<=i;j++)
{
printf(" %c", ch);
}
printf("\n \n");
}


}
