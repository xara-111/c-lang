#include<stdio.h> 
int main()
{
    int n,m;
    printf("Enter number: ");
    scanf("%d",&n);
    m=n%10;
    printf("In one's place: %d",m);
    return 0;
}