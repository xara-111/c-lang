/*
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Age is:%d\n",age);
    
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    int sum=a+b;
    printf("The sum is:%d \n",sum);
}
*/

/*
#include <stdio.h>
int main(){
    int side;
    printf("Enter side: ");
    scanf("%d",&side);
    
    int area= side * side;
    printf("Area is: %d\n",area);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);

    float area=3.14*(radius*radius);
    printf("Area of circle is %f ",area);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Divisible by 2?: %d\n",a%2);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age>18)
    { 
        printf("adult\n");
    }
    else
    {
        printf("nope\n");
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Adult\n");
        printf("Can vote\n");
    }
    else if(age>=13 && age<18)
    {
        printf("teenager\n");
        printf("Can't vote\n");
    }
    else
    {
        printf("child\n");
        printf("Can't vote\n");
    }

    printf("THANK YOU\n");
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    age>=18?printf("VOTE\n"):printf("CAN'T VOTE\n");
    return 0;
}