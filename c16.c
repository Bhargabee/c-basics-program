//check natural number
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number= ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("it is a natural number");
    }
    else{
        printf("it is not a natural number");
    }
    return 0;
}