/*

//PRINT POSITION OF SMALLEST OF N NUMBER USING ARRAY

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i;
    int array[100];
    int smallest=0;

    printf("Enter the no. of element: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the elements in array: ");
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\n");

    smallest=array[0];
    for(i=0; i<n; i++)
    {
        if(array[i]<smallest)
        {
            smallest=array[i];
        }
    }
    printf("smallest: %d\n", smallest);

}
*/

//....................................................................................................................

/*
//INTERCHANGE THE SMALLEST AND LARGEST NUMBER IN AN ARRAY

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i;
    int array[100];
    int smallest=0;
    int largest=0;
    int temp=0;
    
    printf("Enter no. of elements: ");
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

    smallest=array[0];
    for(i=0; i<n; i++)
    {
        if(array[i]<smallest)
        {
            smallest=array[i];
        }
    }
    printf("smallest: %d\n", smallest);

    largest=array[0];
    for(i=0; i<n; i++)
    {
        if(array[i]>largest)
        {
            largest=array[i];
        }
    }
    printf("largest: %d\n", largest);

    temp=largest;
    largest=smallest;
    smallest=temp;

    printf("After swapping, smallest= %d & largest= %d\n",smallest, largest);

}
*/

/*
//FIND WHETHER THE ARRAY OF INTEGERS CONTAINS A DUPLICATE NUMBER

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int i;
    int j;
    int array[100];
    int duplicate=0;

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");

    int count = sizeof(array) / sizeof(array[0]);

for (int i = 0; i < count - 1; i++) { // read comment by @nbro
    for (int j = i + 1; j < count; j++) {
        if (array[i] == array[j]) {
            printf("there is duplicate\n");
        }
    }
}

}
*/


/*

//interchange smallest and largest in array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100];
    int n;
    int i;
    int largest;
    int smallest;
    int lpos;
    int spos;
    int temp;

    printf("Enter no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n; i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&array[i]);
    }
    printf("Array before swapping\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");



    largest=array[0];
    smallest=array[0];
    lpos=0;
    spos=0;
    for(i=0;i<n;i++)
    {
        if(array[i]>largest)
        {
            largest=array[i];
            lpos=i;
        }
        if(array[i]<smallest)
        {
            smallest=array[i];
            spos=i;
        }
        
    }

    temp=array[lpos];
    array[lpos]=array[spos];
    array[spos]=temp;

    printf("After swapping the array\n ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
*/

/*
//duplicate in array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100];
    int n;
    int i;
    int duplicate;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&array[i]);
    }

    duplicate=array[0];
    for(i=0;i<n;i++)
    {
        if(duplicate==array[i])
        {
            duplicate=array[i];
        }
        else{
            printf("No duplicate\n");
        }
    }
    printf("Duplicate is %d\n",duplicate);
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100];
    int i;
    int n;
    int num;
    int loc;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&array[i]);
    }

    printf("Enter the location of array to enter new element: ");
    scanf("%d",&loc);

    printf("Enter the new element: ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        array[loc]=num;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
*/

// deletion left
