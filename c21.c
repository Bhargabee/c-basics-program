//break statement
#include<stdio.h>
int main()
{
    int n=10;
    for(int i=0;i<=n;i++)
    printf("entered numbers are:%d\n",n);
    while(n%2!=0)
    {
        break;
    }
    return 0;
}