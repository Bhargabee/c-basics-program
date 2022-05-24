//multiplication table of a given integer.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a nmber:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        
     printf("%d*%d=%d\n",n,i,n*i);
    }
}