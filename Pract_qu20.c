//sum of n terms odd natural numbers.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("numer of terms : ");
    scanf("%d",&n);
    printf("the odd numbers are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
        sum+=2*i-1;
    }
    printf("the sum of odd natural numbers of %d terms is=%d\n ",n,sum);
}