//wap to check if a student is passed or failed ,marks>30 is pass,marks<=30 is fail(by using if-else and ternary operator)
#include<stdio.h>
int main()
{
        int marks;
    printf("enter the marks of a student\n");
    scanf("%d%d%d%d",&marks);
    if(marks>30)
    {
        printf("student is pass");
    }
    else{
        printf("student is fail");
    }
    return 0;
}