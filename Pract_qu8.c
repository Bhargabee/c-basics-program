//find greatest among three numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the 1st number is greatest number");

        }
        else
        printf("the 3rd number is greatest among three");
    }
    else if(b>c)
    printf("2nd number is the greatest number");
    else
    printf("3rd number is the greatest number among three");
}