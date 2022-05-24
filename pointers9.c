//wap to find the factorial of a given number
#include<stdio.h>
int fact(int n,int *f);
int main()
{
    int n=5,f,i;
    fact(n,&f);
    printf("factorial of 5 is %d",f);
    return 0;

}
int fact(int n, int *f)
{
    int i;
    *f=1;
    for(i=1;i<=5;i++)
    *f=*f*i;
    //printf("factorial of 5 is %d",f);
}