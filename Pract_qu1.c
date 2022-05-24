//write a c program to accept two integers & check whether they are equal or not.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d\n",&a,&b);
    if(a==b)
     printf("1st number and 2nd number are equal");
    else
        printf("two numbers are not equal");
        return 0;
}
