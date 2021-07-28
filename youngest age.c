#include<stdio.h>
int main()
{
    int age;
    char Ram,Shyam,Ajay;
    
    printf("\n enter the age of Ram");
    scanf("\n%d",&Ram);
    
    printf("\n enter the age of Shyam");
    scanf("\n%d",&Shyam);
    
    printf("\n enter the age of Ajay");
    scanf("\n%d",&Ajay);
    
    if(Ram>Shyam)
    printf("\n shyam is younger");
    
    if(Shyam>Ajay)
    printf("\n Ajay is younger");
    
    else
    printf("\n Ram is younger");
    
}