#include<stdio.h>

void main()
{
    int array[20],n,i;
    printf("Enter the total number of values : "); 
    scanf("%d",&n);
    printf("\nEnter the values : ");    
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nThe array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d, ",array[i]);
    }   

}
