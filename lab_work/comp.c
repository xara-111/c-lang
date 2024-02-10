#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[20];    
   char str2[20];  
   int val; 

   printf("Enter the first string : ");  
   scanf("%s",str1);  

   printf("Enter the second string : ");  
   scanf("%s",str2);  

   val=strcmp(str1,str2);  
   if(val==0)  
   printf("strings are same\n");  
   else  
   printf("strings are not same\n");  
   return 0;  
}  
