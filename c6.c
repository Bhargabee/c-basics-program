//wap to check a number is divisible by 2 or not by using ternary operator
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    x%2==0?printf("divisible by 2"):printf("not divisible by 2");
    return 0;
}