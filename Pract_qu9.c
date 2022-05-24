//find the quardrant of 2 number in coordinate axis.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);
    if(num1>0 && num2>0)
    printf("1st quardrant");
    else if(num1>0 && num2<0)
    printf("2nd quardrant");
    else if(num1<0 && num2<0)
    printf("3rd quardrant");
    else if(num1<0 && num2>0)
    printf("4th quardrant");
    else if(num1==0 && num2==0)
    printf("it lies in the origin");

}