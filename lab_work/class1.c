/*
1. HELLO WORLD

#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Hello world\n");
    return 0;
}
*/

/*
2.VARIABLE

#include <stdio.h>
#include<stdlib.h>
int main()
{
    char name[]="Harry";  //variable
    int age=76;

    printf("There was once a man named %s\n",name);
    printf("He was %d years old\n",age);

    age=50;  //modifying halfway

    printf("He really liked his name %s\n", name);
    printf("But he didn't like being %d\n",age);

    return 0;
}

*/


/*
3.DATA TYPES

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age= 40;
    double gpa= 3.6;
    float weight= (56.7);
    char grade='A';
    char phrase[]="Sara";    //basically making array of characters

    printf("%d\n",age);
    printf("%f\n",gpa);       //%f is spaceholder of double as well as float
    printf("%.2f\n",weight);  //we only want 2 values after decimal so  (%.2f)
    printf("%c\n",grade);
    printf("%s\n",phrase);

}

*/

/*
4.PRINTF FUNCTION

#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hello \nworld\n");
    printf("Hello \" world\n");  //to print "
    printf("%d\n",500);
    printf("My favourite %s is %d\n","number",500);
}

*/

/*
5.MATHS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>     // To perform built in functions from maths libraries

int main()
{
    printf("%f\n", 0.5 + 9.2);   // we can directly use maths operations like this for float.
    printf("%d\n", 5/4);  //even though result is in decimal it returns 1 because of %d integer spaceholder.
    printf("%f\n", 5/4.0); //rather this give more precise result .

    printf("%f\n", pow(2, 3));  //power of 2 numbers
    printf("%f\n",sqrt(36));    //square root of a number
    printf("%f\n", ceil(36.189)); //(ceiling): prints the next highest whole number
    printf("%f\n", floor(36.52)); //floor:prints the previous lowest number
}
*/

/*
6.CONSTANT

#include<stdio.h>
#include<stdlib.h>

int main()
{
    const int num=5;  //making the num variable a constant
    printf("%d\n",num);
    //num=8;         //can't modify anymore
    printf("%d\n",num);
}
*/


/*
7.USER INPUT

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Your age is %d\n",age);
    
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf",&gpa);          //lf for user input in float form
    printf("Your gpa is %f\n",gpa);

    

    char namae[20];
    printf("Enter your name: ");
    fgets(namae, 20, stdin);        //prints john smith
    printf("Your name is %s", namae);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);             //prints john
    printf("Your name is %s\n",name);

    return 0;

}
*/


/*
8. SIMPLE CALCULATOR

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number:  ");
    scanf("%d", &num2);

    printf("%d\n",num1+num2);

}
*/


/*
9. MAD-LIBS GAMES

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[30];
    char pn[30];
    char celebF[30];
    char celebL[30];

    printf("Enter a color: ");
    scanf("%s",color);

    printf("Enter a plural noun: ");
    scanf("%s",pn);

    printf("Enter a celebrity: ");
    scanf("%s %s",celebF, celebL);

    printf("Roses are %s\n",color);
    printf("%s are blue\n",pn);
    printf("I love %s %s\n", celebF,celebL);

    return 0;
}
*/


/*
10. ARRAYS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lucky_numbers[]={4, 8, 15, 16, 23, 42};   //declaring an array
    lucky_numbers[2]=200;    //modifying at index 2 of array
    printf("%d\n", lucky_numbers[2]);

    int luckyNumbers[10];  //array could also be declared like this
    luckyNumbers[0]=3;
    luckyNumbers[1]=3;
    luckyNumbers[2]=3;
    printf("%d\n", luckyNumbers[2]);
}
*/

/*
11. USER DEFINED FUNCTION CREATION

#include<stdio.h>
#include<stdlib.h>
int main()
{
    sayhi();
}

void sayhi()
{
    printf("Hello user\n");
}
*/

/*
//12. MODIFY 1 FUNCTION(PROTOTYPE VER.)

#include <stdio.h>
#include<stdlib.h>

void sayhi(char name[]);       //declare the function before main function (prototype)

int main()
{
    sayhi("Mike");

}
void sayhi(char name[])
{
    printf("hello %s\n",name);
}
*/




/*
//13.MODIFY 2

#include <stdio.h>
#include<stdlib.h>

void sayhi(char name[], int age);

int main()
{
    sayhi("Mike",34);

}

void sayhi(char name[], int age)
{
    printf("Hi %s, you are %d years old\n", name, age);
}
*/

/*
14. RETURN STATEMENT

#include <stdio.h>
#include <stdlib.h>

double cube(double num)           //prototype isn't required cuz it's written above main function.
{
    double result=num*num*num;
    return result;
    printf("Here");     //it doesn't get excecuted because return statement breaks us out of the function.
}

int main()
{
    printf("Answer: %f\n", cube(3.0));
    return 0;
}
*/


/*
15. IF STATEMENT

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);

int main()
{
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    int result=max(a,b);
    printf("The maximum of two number is %d\n ",result);


}

int max(int a, int b)
{
    int more;
    if(a>b)
    {
        more=a;
    }
    else
    {
        more=b;
    }
    return more;

}
*/


/*
16. IF STATEMENTS 2

#include<stdio.h>
#include<stdlib.h>

int max(int a, int b, int c);

int main()
{
    int a;
    int b;
    int c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);

    int result=max(a,b,c);
    printf("The maximum of three number is %d\n ",result);

    if(3>2 || 2>5)       //OR OPERATOR
    {
        printf("True\n ");
    }
    if(3!=2)            //NOT EQUAL TO OPERATOR
    {
        printf("True\n");
    }
    if(!(3<2))         // NEGATION OPERATOR
    {
        printf("True\n");
    }
    

}

int max(int a, int b, int c)
{
    int more;
    if(a>=b && a>=c)       //AND OPERATOR
    {
        more=a;
    }
    else if(b>=a && b>=c)
    {
        more=b;
    }
    else
    {
        more=c;
    }
    return more;
}
*/


/*
17. CALCULATOR

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter a operator: ");
    scanf(" %c ",&op );
    printf("Enter another number: ");
    scanf("%lf", &num2);

    if(op=='+')
    {
        printf("%f",num1+num2);
    }
    else if(op=='-')
    {
        printf("%f",num1-num2);
    }
    else if(op=='/')
    {
        printf("%f", num1/num2);
    }
    else if(op=='*')
    {
        printf("%f", num1*num2);
    }
    else
    {
        printf("Invalid operator\n");
    }
}
*/


/*
18. SWITCH STATEMENTS


#include<stdio.h>
#include<stdlib.h>
int main()
{
    char grade;
    printf("Enter grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
        printf("You did great!\n");
        break;

        case 'B':
        printf("You did alright!\n");
        break;

        case 'C':
        printf("You did poorly!\n");
        break;

        default:
        printf("Invalid grade\n");
    }
}
*/


/*
//19. STRUCT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age=22;
    student1.gpa=3.2;
    strcpy(student1.name,"Jim");
    strcpy(student1.major,"business");

    struct Student student2;
    student2.age=34;
    student2.gpa=3.6;
    strcpy(student2.name,"Charles");
    strcpy(student2.major,"computer");


    printf("%.2f\n",student1.gpa);
    printf("%s\n",student1.name);
    printf("%.2f\n",student2.gpa);
    printf("%s\n",student2.name);
}
*/



/*
20. WHILE LOOP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int index=1;
    while(index<=5)
    {
        printf("%d\n",index);
        index++;
    }
    return 0;
}
*/

/*
21. DO-WHILE LOOP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int index=1;
    do
    {
        printf("%d\n",index);
        index++;
    }
    while(index<=5);
}
*/


/*
22. FOR LOOPS

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int secretNumber=5;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    int OutOfGuesses=0;

    while(guess!=secretNumber && OutOfGuesses==0)
    {
        if(guessCount<guessLimit){
        printf("Enter a number: ");
        scanf("%d",&guess);
        guessCount++;
        }
        else{
            OutOfGuesses=1;
        }
    }    
    if(OutOfGuesses==1)
    {
        printf("Out Of Guesses\n");
    }else{
        printf("YOu win\n");
    }
}
*/


/*
23. FOR LOOP

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int luckynumbers[]={4,8,15,16,23,42};

    int i;
    for(i=0;i<6;i++)
    {
        printf("%d\n",luckynumbers[i]);
    }
}
*/


/*
24. 2D ARRAYS

#include<stdio.h>
#include<stdlib.h>

//2D ARRAY- A SITUATION WHERE WE HAVE AN ARRAY WHERE ALL OF THE ELEMENTS IN THE ARRAY ARE ACTUALLY ARRAYS THEMSELVES.

int main()
{
    int nums[3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
    printf("%d\n",nums[0][0]);
}
*/


/*
25. NESTED LOOPS

#include<stdio.h>
#include<stdlib.h>

//NESTED LOOP- A LOOP WITHIN A LOOP

int main()
{
    int nums[3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d, ", nums[i][j]);
        }
        printf("\n");

    }
}
*/


/*
26. MEMORY ADDRESSES

#include <stdio.h>
#include <stdlib.h>

//RAM IS THE MEMORY COMPUTER USE TO RUN PROGRAMS.
int main()
{
    int age=30;
    double gpa=3.4;
    char grade= 'A';

    printf("%p\n %p\n %p\n", &age, &gpa, &grade);
}
*/


/*
27. POINTERS

#include<stdio.h>
#include<stdlib.h>

//THINK OF POINTER AS A DATA TYPE FOR MEMORY ADDRESS TO MAKE IT SIMPLE.
int main()
{
    int age=30;
    int * page = &age; //this pointer variable is storing the memory address of age variable

    double gpa=3.4;
    double * pgpa = &gpa;

    char grade='A';
    char * pgrade = &grade;

    printf("age's memory address: %p\n",&age);

}
*/


/*
//28. DEREFERENCING POINTERS

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age=30;
    int * page = &age;

    printf("%d\n",*page);  //
    printf("%d\n", *&age);
    //printf("%p\n", &*&age);
    printf("%d\n", *&*&age);

}
*/


/**
//29.WRITING FILES

#include <stdio.h>
#include <stdlib.h>

//"r"=read file
//"w"=write file
//"a"=append

int main()
{
    FILE * fpointer=fopen("employees.txt","w");  //(name of file, mode)

    fprintf(fpointer, "Jim, Salesman\n Pam, Receptionist\n");  //To input into the created file

    fclose(fpointer);  //Never forget to close the file after opening it.
}
*/


/*
30. APPEND FILES

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer=fopen("employees.txt","a");  //(name of file, mode)

    fprintf(fpointer, "\n Kelly, Customer service");  //To input into the created file

   fclose(fpointer);  //Never forget to close the file after opening it.
}
*/

/*
31. READING FILE 

#include <stdio.h>
#include<stdlib.h>

int main()
{
    char line[255];   // a place to store the information that it gets.
    FILE * fpointer= fopen("employees.txt","r");

    fgets(line,255, fpointer);      //fgets lets us to read the lines of the file one by one
    fgets(line,255, fpointer);
    printf("%s", line);

    fclose(fpointer);
}
*/