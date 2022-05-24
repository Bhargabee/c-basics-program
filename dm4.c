//wap to allocate memory of size n ,where n is entered by user.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);

    }
    return 0;
}