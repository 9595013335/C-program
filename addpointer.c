#include<stdio.h>
void add(int*,int*);
int main()
{
int a,b;
printf("\n enter a  and b");
scanf("%d%d",&a,&b);
add(&a,&b);

//printf("\n addition is c=%d",c);
}
void add(int* a,int* b)
{
int c;
 c = *a + *b;

printf("\n addition is c=%d",c);	

}

