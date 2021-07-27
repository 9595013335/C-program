#include <stdio.h>
int main()
{
  int n,i;
  double arr[10];
    printf("enter the 1 to 10 values\n");
    scanf("%d",&n);
  
    for(i=0 ; i<n ; i++)
    {
    printf("\nenter no %d= ",i+1);
    scanf ("%lf",&arr[i]);
    }
 
    for(i=0 ; i<n ; i++)
   
    {
    if (arr[0]>arr[i])
    {
      arr[0]=arr[i];
    }
    
    
    }
    printf("\nsmallest element =%.lf",arr[0]);
    return 0;
}