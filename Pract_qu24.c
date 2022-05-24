//print right angle triangle with increasing number.
#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    printf("input the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
    }
}