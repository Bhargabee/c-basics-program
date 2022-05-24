//waf to calculate sum, product,avg of two numbers
#include<stdio.h>
void dowork(int a,int b,int *sum,int *prod,int *avg);
int main()
{
    int a=3,b=5,sum,prod,avg;
    dowork(a,b,&sum,&prod,&avg);
    printf(" sum=%d\n product=%d\n average=%d\n",sum,prod,avg);
    return 0;
}
void dowork(int a, int b,int * sum,int * prod,int * avg)
{
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}