/*
#include <stdio.h>
int main()
{
    char day;
    printf("Enter day(1-7): ");
    scanf("%s",&day);

    switch(day)
    {
        case 'm':printf("monday\n");
        break;
        case 't':printf("tuesday\n");
        break;
        case 'w':printf("wednesday\n");
        break;
        case 'T':printf("thursday\n");
        break;
        case 'f':printf("friday\n");
        break;
        case 's':printf("saturday\n");
        break;
        case 'S':printf("sunday\n");
        break;
        default: printf("TRASH\n");


    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d",&number);

    if(number>=0)
    {
        printf("Positive\n");
        if(number%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    }
    else{
        printf("Negative\n");
    }

    return 0;
*/

/*
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the letter: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("Uppercase\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lowercase\n");
    }
    else{
        printf("Trash\n");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5; i++)
    {
        printf("Hello world\n");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    for(int i=10;i>=1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    for(int i=0;i<=10; i++)
    {
        printf("%d  ",i);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int i=1;
    printf("%d\n", i++); //OUTPUT = 1  -> (use, then increase)
    printf("%d\n",i);   //OUTPUT = 2

    printf("AND\n");

    printf("%d\n", ++i); //OUTPUT =3  -> (increase, then use)
    printf("%d\n",i);   //OUTPUT =3

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int i=2;
    printf("%d\n", i--); //OUTPUT=2
    printf("%d\n",i);   //OUTPUT=1
    
    printf("AND\n");

    printf("%d\n", --i); //OUTPUT=1
    printf("%d\n",i);   //OUTPUT=1

    return 0;
}
*/ 

/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int i=0;
    while(i<=num)
    {
        printf("%d\n",i);
         i++;
    }

    for(int i=0; i<=num; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=num);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("The sum is= %d\n",sum);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    for(int i=1; i<=10; i++)
    {
        int prod=num*i;
        printf("%d x %d = %d\n", num,i,prod);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        if(i==3){
            // break/continue;
        }
        printf("%d\n",i);
    }
    printf("End\n");
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int num;
    do{
        printf("Enter number: ");
        scanf("%d",&num);
    }
    while(num%2==0);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int num;
    do
    {
        printf("Enter number: ");
        scanf("%d",&num);

        if(num%7==0){
            printf("End\n");
            break;
            
        }
    } while (1);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter n: ");
    scanf("%d",&num);

    int fact=1;
    for(int i=1; i<=num; i++)
    {
        fact*=i;       
    }
    printf("Factorial is %d\n",fact);

    return 0;
}
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    for(int i=10; i>=1;i--)
    {
        int prod=num*i;
        printf("%d * %d =%d\n",num,i,prod);
    }
    return 0;
}