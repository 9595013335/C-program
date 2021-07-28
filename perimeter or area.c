#include<stdio.h>
int main()
{
    float length,width,area,perimeter;
    
    printf("\n enter the length  of triangle ");
    scanf("%f",&length);
    
    printf("\n enter the  width of triangle ");
    scanf("%f",&width);
    
    area=length*width;
    perimeter=length+width;
    
    if(area>perimeter)
    printf("\n area is greter");
    else
    printf("\n perimeter is greter");
    
}
