#include<stdio.h>

void main()
{
    int array[20],n,i,del,j;
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
    printf("\nEnter the number to be deleted : ");
    scanf("%d",&del);  
    for(i=0;i<n;i++)
    {
        if(del==array[i])
        {
            for(j=i;j<n;j++)
            {
                array[j]=array[j+1];
            }
          
        }
    } 
    for(i=0;i<n;i++)
    {
        printf("%d, ",array[i]);
    }
}
