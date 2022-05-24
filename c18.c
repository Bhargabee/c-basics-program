//print the numbers from 0 to n ,n is given by user
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number= ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}