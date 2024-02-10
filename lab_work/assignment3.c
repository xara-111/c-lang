/*
// character in ascii

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);

    printf("The ascii value of %c will be %d\n",c,c);
    return 0;
}
*/

//......................................................................................................................

/*
//upper case to lower case character

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char lower;
    char upper;
    int ascii;

    printf("Enter a uppercase alphabet: ");
    scanf("%c",&upper);

    ascii=upper;
    lower=upper+32;
    printf("In lower: %c\n",lower);
    return 0;
}
*/

//......................................................................................................................

/*
//print the digit at one's place

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int once;
    printf("Enter any number: ");
    scanf("%d",&n);
    once=n%10;
    printf("The digit at once place is %d\n",once);
    return 0;
}
*/

//......................................................................................................................

/*
//swap 2 numbers using temp

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int b;
    int temp;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;
}
*/

//......................................................................................................................

/*
//swap 2 numbers w/o using temp

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;

}
*/