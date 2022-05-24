//check a given number is even or odd.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("entered number is even");
    else
    printf("entered number is odd");
}