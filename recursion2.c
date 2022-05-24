//sum of first n natural numbers
#include<stdio.h>

int sum(int n);//function prototype

int main()
{
    printf("%d",sum(5));
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int a=sum(n-1);
    int b=a+n;
    return b;
}