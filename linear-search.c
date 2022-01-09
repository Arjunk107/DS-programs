#include<stdio.h>

void main()
{
    int a[20],x,num,i;
    printf("Enter the number of elements in array : \n");
    scanf("%d",&num);
    printf("Enter the elements :\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched :");
    scanf("%d",&x);
    for(i=0;i<num;i++)
    {
        if(a[i]==x)
        break;
    }
    if(i<num)
        printf("Element found at %d \n",i);
    else
        printf("element not found");
}
