/*

//FIND LENGTH OF THE STRING (ONE SINGLE WORD VER.)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int len;

    char word[30];
    printf("Enter any words: ");
    scanf("%s", word);

    len=strlen(word);
    printf("The length of the string is %d\n",len);

}
*/

//......................................................................................................................

/*

//FIND THE LENGTH OF THE STRING (MULTIPLE WORDS VER.)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int len;
    char words[100];

    printf("Enter your words: ");
    fgets(words, 100, stdin);

    len=strlen(words);
    printf("The length of the string is %d\n", len);
}
*/

//......................................................................................................................

/*

//CONVERT CHARACTERS OF A STRING TO UPPER CASE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char lower[100];
    int i;
    int len;

    printf("Enter your words: ");
    fgets(lower, 100, stdin);

    printf("The original string in lower is %s\n",lower);

    len=strlen(lower);
    for(i=0; i<=len; i++)
    {
        if(lower[i]>='a'&& lower[i]<='z')
        {
            lower[i]=lower[i]-32;
        }
    }
    printf("Converting to uppercase: %s\n",lower);
}
*/

//......................................................................................................................


/*

//CONVERT CHARACTERS OF A STRING TO LOWER CASE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char upper[100];
    int i;
    int len;

    printf("Enter your words: ");
    fgets(upper, 100, stdin);

    printf("The original in upper case is %s\n", upper);
    
    len=strlen(upper);

    for(i=0; i<=len; i++)
    {
        if(upper[i]>='A' && upper[i]<='Z')
        {
            upper[i]=upper[i]+32;
        }
    }
    printf("In lowercase: %s\n", upper);
}
*/

//......................................................................................................................


//CONCACENATE: ENTIRELY NEW LIST IS CREATED BY JOING TWO STRINGS ANYWHERE THEY WANT.
//APPEND: ORIGINAL IS MODIFIED BY ADDING SOMETHING WITH WHATEVER WAS IN THERE AT THE END.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char string1[100];
    char string2[100];


    printf("Enter first string: ");
    fgets(string1, 100, stdin);

    printf("Enter second string: ");
    fgets(string2, 100, stdin);

    printf("%s %s", string1, string2);
}
