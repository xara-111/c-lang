/*

//pointers (BASIC)

#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int x=30;
    int *px=&x;

    printf("%p\n",&x);
}
*/

//......................................................................................................................

/*
//MAXIMUM OF 2 NUMBERS USING POINTERS 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int b;
    int max;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    int *pa=&a;
    int *pb=&b;

    if(a>b)
    {
        max=*pa;
    }
    else
    {
        max=*pb;
    }
    printf("The maximum is %d\n",max);

}
*/

//......................................................................................................................

/*
//MAXIMUM OF TWO NUMBER USING POINTER(VER 2)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int b;
    int*pa=&a;
    int*pb=&b;

    printf("Enter first no.: ");
    scanf("%d",pa);
    printf("Enter 2nd no.: ");
    scanf("%d",pb);

    if(*pa>*pb)
    {
        printf("The maximum is: %d\n",*pa);
    }
    else{
        printf("The maximum is: %d\n",*pb);
    }
}
*/

//......................................................................................................................

/*
//STORE ELEMENTS IN ARRAY AND PRINT USING POINTER

#include <stdio.h>

int main()
{
    int array[100];
    int i;
    int n;

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&array[i]);
    }
    
    for(i=0; i<n; i++)
    {
    int *parray=&array[i];
    printf("%d,",*parray);
    }
    printf("\n");
}
*/

//......................................................................................................................

/*
//SWAP ELEMENTS USING CALL BY REFERENCE.

#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b);

int main()
{
    int a;
    int b;

    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    swap(&a,&b);       //SWAPPING THE CONTENT IN THE ADRESS 

    printf("A is %d and B is %d\n.",a,b);   //PRINTING THE SWAPPED VALUE
}

void swap(int *a, int *b)    // INTEGER POINTER NAMED A AND B IS SET TO RFERENCE TOWARD THE VALUE OF A AND B FROM MAIN FUNC.
{
    int temp;
    
    temp=*a;
    *a=*b;
    *b=temp;
}
*/

//......................................................................................................................

// reverse array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100];
    int temp;
    int i;
    int n;

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter elements: ");
        scanf("%d",&array[i]);
    }
    printf("The initial array:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

   

    for(i=0;i<n/2;i++)
    {
        temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
        
    }

    printf("After swapping the array: \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
}