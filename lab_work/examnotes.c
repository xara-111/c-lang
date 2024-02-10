/*
//fibonacci using recursion

#include<stdio.h>
#include<stdlib.h>

int fibonacci(int num);

int main()
{
    int num;
    printf("Enter number of elements: ");
    scanf("%d",&num);

    for(int i=0; i<num; i++)
    {
        printf("%d ",fibonacci(i));
    }
}
int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}
*/


/*
//gcd recursion

#include<stdio.h>
#include<stdlib.h>
int hcf(int a, int b);

int main()
{
    int a;
    int b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("ENter b: ");
    scanf("%d",&b);

    printf("GCD is %d\n",hcf(a,b));
}
int hcf(int a, int b)
{
    if(b!=0)
    {
        return hcf(b,a%b);
    }
    else{
        return a;
    }
}
*/

/*
//palindrome
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string[100];
    int i, length;
    int j=0;

    printf("Enter string: ");
    scanf("%s",string);

    length=strlen(string);

    for(i=0;i<length/2;i++)
    {
        if(string[i]!=string[length-i-1])
        {
            j=1;
            break;
        }
    }
    if(j)
    {
        printf("not palindrome\n");
    }
    else{
        printf("palindrome\n");
    }
}
*/

/*
//substring in string

#include<stdio.h>
int main()
{
  char str[80], substr[10];
  int count1 = 0, count2 = 0, i, j, flag;

  //user enters the string

  printf("Enter a string: ");
  scanf("%s", str);

  //user enters the substring

  printf("Enter a substring to search: ");
  scanf("%s", substr);




  //'\0' represents the end of the string

  while (str[count1] != '\0')
    count1++;

  while (substr[count2] != '\0')
    count2++;
    
  for (i = 0; i <= count1 - count2; i++)
  {
    for (j = i; j < i + count2; j++)
    {
      flag = 1;
      if (str[j] != substr[j - i])
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    break;
  }
  if (flag == 1)
    printf("Substring is found in the entered string");
  else
    printf("Substring is not found in the entered string");

  return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int roll;
    char dept[100];
    char name[100];
    char course[100];
    int yearofadd;
};
int main()
{
    struct student students[450];
    students[0].roll=1;
    strcpy(students[0].dept,"btech\n");

    int target=2024;
    printf("Student who joined in %d\n",target);

    for(int i=0;i<459; i++)
    {
        if(students[i].yearofadd==target)
        printf("%s\n",students[i].name);
    }
}