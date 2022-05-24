//check given year is a leap year or not.
#include<stdio.h>
int main()
{
    int y;
    printf("Enter year:-");
    scanf("%d",&y);
    if(y%4==0)
    printf("this year is a leap year");
    else if(y%100!=0)
     printf("this year is not a leap year");
     else if(y%400==0)
     printf("this year is a leap year");
    else
    printf("this year is not a leap year");
}