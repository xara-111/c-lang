/*

-> DIAMOND PATTERN 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int j;
    int n;
    int k;
    int l;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)
        {
            printf("*");
        }
        for(l=0; l<i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1; i>=0; i--)
    {
        for(j=i+1; j<n; j++)
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)
        {
            printf("*");
        }
        for(l=0; l<i; l++)
        {
            printf("*");
        }
        printf("\n");

    }
}
*/

//....................................................................................................................

/*
//READ AND DISPLAY N NUMBERS USING ARRAY

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int array[100];
    int i;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d,",array[i]);
    }
    printf("\n");
}
*/

//....................................................................................................................

/*

// Calculate average of n numbers using array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int sum=0;
    float average;
    int array[100];

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the elements in array: ");
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+array[i];
    }
    average=sum/n;

    printf("The average is %f\n", average);
}
*/

//...................................................................................................................

/*

//print the second largest element from a list of integers in an array.

#include<stdio.h>
int main()
{
    int n=0;
    int i=0;
    int largest=0;
    int second=0;
    int temp=0;
    int array[n];

    printf("Enter no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");

    largest=array[0];   //assigning first element as largest and second as second largest.
    second=array[1];
    
    if(largest<second)  //in this case, swap
    {
        temp=largest;
        largest=second;
        second=temp;
    }
    for(i=0; i<n; i++)  
    {
        if(array[i]>largest)  //comparing every element of array with largest
        {
            second=largest;
            largest=array[i];
        }
        else if(array[i]>second && array[i]!=second)  //if any element is greater than second and not equal to the already assigned value of second
        {
            second=array[i];  //then that element is assigned as second
        }
    }
    printf("The second largest is %d\n",second);
}

*/