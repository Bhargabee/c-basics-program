//print "hello world" n times by recursion
#include<stdio.h>
void printhw(int n);

int main()
{
    printhw(5);
    return 0;
}
//recursive function
void printhw(int n)
{
    if(n==0)//base condition
    {
        return ;

    }
    printf("hello world\n");
    printhw(n-1);
}