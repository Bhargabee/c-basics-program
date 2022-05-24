//wap to sum of two numbers using pointer
#include<stdio.h>
void sum(int a, int b,int *s);
int main()
{
    int a=5,b=6,s;
    sum(a,b,&s);
    printf("sum= %d",s);
    return 0;

}
void sum(int a, int b, int *s)
{
    *s=a+b;

}