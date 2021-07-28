#include<stdio.h>
int main()
{
    int arr[25],i,positive=0,negative=0,odd=0,even=0;
    for(i=0;i<25;i++)
    {
        printf("\n enter the no = ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<25;i++)
    {
        if (arr[i]>0)
        positive++;
        
        if (arr[i]<0)
        negative++;
        
        if (arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("\n %d positive no are",positive);
     printf("\n %d negative no are",negative);
     printf("\n %d even no are",even);
     printf("\n %d odd no are",odd);
}