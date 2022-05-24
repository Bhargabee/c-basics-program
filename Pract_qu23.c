//print a pattern like right angle triangle with repeated no in a row.
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
            printf("%d",i);
            
        }
    }
}