//factorial of n
#include<stdio.h>
int fact(int n);

int main()
{
    printf("%d",fact(5));
    return 0;
}
int fact(int n)
{
    if(n==1)//base cond.
    {
        return 1;
    }
    int a=fact(n-1);
    int b=a*n;
    return b;
}