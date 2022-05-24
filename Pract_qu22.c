//print right angle triagle with a no.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("input the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    }
}