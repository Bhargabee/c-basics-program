//wap to check the number is divisible by 2 or not(using if-else)
#include<stdio.h>
int main()
{
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("divisible by 2\n");
    }
    else{
        printf("not divisible by 2");
    }
    return 0;
}
