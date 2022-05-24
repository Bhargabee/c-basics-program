//write a program to print vertically the multiplication table from 1-n.
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("input the multiplication table from 1-");
    scanf("%d",&n);
    printf("multiplication table from 1-%d\n",n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d*%d=%d\t\t",j,i,i*j);
        }
        printf("\n");
    }
}