//n terms natural number and their sum.
#include<stdio.h>
int main()
{
    int n, i,sum=0;
    printf("enter the natural number limit:");
    scanf("%d",&n);
    printf("the first %d natural numbers are:-%d\n",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d\n",i);
    }
    printf("the sum of %d terms natural numbers is: %d\n",n,sum);
}