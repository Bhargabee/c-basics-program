//sum of first n natural no and also print them in reverse
#include<stdio.h>
int main()
{
    int n=10,sum=0;
    printf("first 10 natural numbers are\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("sum=%d\n",sum);
        return 0;
    
}