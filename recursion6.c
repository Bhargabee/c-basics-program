//waf to print n terms of the fibonacci sequence 0 1 1 2 3 5 8 13 21......

#include<stdio.h>
int fibonacci(int n);

int main()
{
    printf("%d",fibonacci(4));
    return 0;
}
int fibonacci(int n)
{
    if(n==0)//base cond.
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int a=fibonacci(n-1);
    int b=fibonacci(n-2);
    int c=a+b;
    return c;
}