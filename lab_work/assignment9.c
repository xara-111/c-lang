/*

//COMPARE TWO STRING

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char string1[100];
    char string2[100];
    int value;

    printf("Enter the first string: ");
    fgets(string1, 100, stdin);

    printf("Enter the second string: ");
    fgets(string2, 100, stdin);

    value=strcmp(string1, string2);      //STRCMP COMPARE TWO STRINGS CHARACTER BY CHARACTER AND IF EQUAL RETURN 0.

    if(value==0)
    {
        printf("Strings are same\n");
    }
    else
    {
        printf("Strings are not same\n");
    }
}

*/

/*
//REVERSE A STRING
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter string: ");
    fgets(string, 100, stdin);

    char temp[100];

    strcpy(temp,string);
    int len=strlen(string);
    int start=0;
    int end=len-1;
    while(start<end)
    {
        char temp=string[start];
        string[start]=string[end];
        string[end]=temp;
        start++;
        end--;
    }
    printf("Reverse is %s\n",string);
}
*/

/*

//COUNT THE NO. OF WORDS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string[100];
    int i;
    int count=0;
    printf("Enter strings: ");
    fgets(string,100, stdin);

    for(i=0; string[i]!='\0'; i++)
    {
        if(string[i]==' ' && string[i+1]!=' ')
        {
            count++;
        }
    }
    printf("%d\n",count+1);
}
*/