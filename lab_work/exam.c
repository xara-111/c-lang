#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100];
    int i;
    int n;
    int temp;

    printf("Enter no. of eleements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("ENter elements: ");
        scanf("%d",&array[i]);
    }
    printf("Initial array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    int largest=array[0];
    int lpos=0;
    int smallest=array[0];
    int spos=0;

    for(i=0;i<n;i++)
    {
        if(largest<array[i])
        {
            largest=array[i];
            lpos=i;
        }
        if(smallest>array[i])
        {
            smallest=array[i];
            spos=i;
        }
        temp=array[lpos];
        array[lpos]=array[spos];
        array[spos]=temp;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}