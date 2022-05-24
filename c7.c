//check even or odd number
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("even number");
    }
    else{
        printf("this is a odd number");
    }
    return 0;
}