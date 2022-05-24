//addition of two matrix.
#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    printf("second matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\n",&b[i][j]);
        }
    }
    printf("element of first matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("element of second matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("addition of two matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}