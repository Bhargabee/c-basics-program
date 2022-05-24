//grades to a student 
#include<stdio.h>
int main()
{
    int marks;
    printf("enter the mark = ");
    scanf("%d",&marks);
    if(marks<30)
    {
        printf("c grade");
    }
    else if(marks>=30 && marks<70)
    {
        printf("b grade");
    }
    else if(marks>=70 && marks<90)
    {
        printf("a grade");

    }
    else if(marks>=90 && marks <100)
    {
        printf("a+ grade");
    }
    return 0;
     
}