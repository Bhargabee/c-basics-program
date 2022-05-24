//wap to sum of two numbers using pointer
#include<stdio.h>
void sum(int a,int b);
int main()
{
    int a=5,b=6,s;
    sum(a,b);
    return 0;

}
void sum(int a,int b)
{
    int s=a+b;
    printf("sum=%d",s);

}