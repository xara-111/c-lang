/*
PATTERN: 
*
**
***
****
*****
*/

/*
->CODE

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i;
    int j;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//...................................................................................................................


/*
PATTERN:
A
BC
DEFG
IJKL
*/

/*
->CODE

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i;
    int j;
    char alpha='A';
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c ",alpha);
            alpha++;
        }
        printf("\n");
    }
    return 0;
}
*/

//....................................................................................................................

/*
PATTERN:
A
AB
ABC
*/

/*
->CODE

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i;
    int j;
    char alpha='A';
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c ",alpha+j);
            
        }
        printf("\n");
    }
    return 0;
}
*/


//..................................................................................................................

/*

reverse of a number

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int remainder;
    int reverse;
    printf("Enter number: ");
    scanf("%d",&n);

    reverse=0;

    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    printf("The reverse is %d\n",reverse);
    return 0;

}
*/

//...................................................................................................................

/*
PATTERN:
*
**
***
****

*/

/*
-> CODE

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i;
    int j;
    int k;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0;j<=i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
*/

//....................................................................................................................

/*
PATTERN:
       *
      ***
     *****
    *******
*/

/*
->CODE:


   #include<stdio.h>
   #include<stdlib.h>
   int main()
   {
    int i;
    int j;
    int k;
    int n;
    int l;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=i; j<n-1; j++)
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)
        {
            printf("*");
        }
        for(l=1; l<=i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
   }
*/

//....................................................................................................................

/*
PATTERN: DIAMOND PATTERN
   *
  ***
 *****
*******
*******
 *****
  ***
   *
*/

/*
-> CODE

#include<stdio.h>
#include<stdlib.h>
   int main()
   {
    int i;
    int j;
    int k;
    int n;
    int l;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)  //LINES
    {
        for(j=i; j<n-1; j++)  //DECREASING SPACES
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)   //LHS STARS
        {
            printf("*");
        }
        for(l=1; l<=i; l++)    //RHS STARS
        {
            printf("*");
        }
        printf("\n");
       
    }
    for(i=n-1; i>=0; i--)     //JUST REVERSE THE LINE LOOP'S PARAMETERS AND MODIFY AS REQUIRED FOR THE LOWER PART 
    {
        for(j=i; j<n-1; j++)
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)
        {
            printf("*");
        }
        for(l=1; l<=i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
        
    return 0;
   }
*/

//....................................................................................................................

/*
PATTERN: PASCAL TRIANGLE
   1
  1 1
 1 2 1
1 3 3 1
*/

/*
->CODE

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int j;
    int k;
    int l;
    int n;
    int p;

    printf("enter n: ");
    scanf("%d",&n);

    //p=1;

    for(i=0; i<n; i++)
    {
        for(j=i; j<n-1; j++)
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)
        {
            if(i==0||k==0)       //PRINT 1 FOR THE FIRST DIGIT OF EVERY LINE
            {
                p=1;
                printf("%d",p);
            }
            
            else{
                p=p*(i-k+1)/k;   //FORMULA FOR PASCAL TRIANGLE
                printf("%3d",p); 

//%3d MEANS PRINT ONLY 3 DIGITS BUT SINCE HERE ONLY 1 DIGIT IS TO BE PRINTED THE OTHER 2 WILL BE TREATED AS SPACE
            }
            
            
        }
        printf("\n");

    }
}
*/

//....................................................................................................................

/*
//calculator (switch)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1;
    int num2;
    char opp;
    float result;

    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);

    printf("Choose a operator to perform: ");
    scanf(" %c", &opp);   //PUT SPACE AFTER SCANF THE " BEFORE %C ELSE WILL SHOW ERROR AS IT IS A FORMAT SPECIFIER.

    result=0;

    switch(opp)
    {
        case'+':
        result=num1+num2;
        break;

        case'-':
        result=num1-num2;
        break;

        case'*':
        result=num1*num2;
        break;

        case'/':
        result=num1/num2;
        break;

        default:
        printf("Invalid operation\n");
    }
    printf("Result= %f\n",result);
    return 0;
}
*/

//....................................................................................................................

/*

//ARMSTRONG NUMBER(3 DIGIT)

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n;
    int temp;
    int r;
    int sum;
    sum=0;
    printf("Enter a 3 to 4 digit number to check if it's armstrong or not: ");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("ARmstrong\n");
    }
    else{
        printf("Not armstrong\n");
    }
    return 0;

}
*/

//....................................................................................................................

/*

ARMSTRONG NUUMBER (N DIGIT)-> NOT UNDERSTOOD AT ALL

#include <math.h>
#include <stdio.h>

int main() {
   int num, originalNum, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
*/
//......................................................................................................................
