//cube of the n number of integer.
#include<stdio.h>
int main()
{
    int n,i,cube;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    cube=i*i*i;
    printf("%d\n",i);
    printf("the cube of the given number is :%d\n",cube);
    }

}