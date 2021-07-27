#include<stdio.h>
int main()
{
    int a,i,arr[10],count=0;
    
    for(i=0;i<10;i++)
    {
        printf("\nenter any 10 values ");
        scanf("%d",&arr[i]);
        
    }
    
    printf("\nenter no you want to search ");
        scanf("%d",&a);
        
         for(i=0;i<10;i++)
         {
        if (arr[i]==a)
        count++;
        
         }
      
        if (count)
		printf("\n\n%d is present in the data %d times.", a, count);
	     else
		printf("\n\n%d is not present in the data.", a);
    }
