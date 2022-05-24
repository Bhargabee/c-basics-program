//read an age of a candidate and check whether he is eligible for casting vote or not.
#include<stdio.h>
int main()
{
    int num;
    printf("age of the candidate is:-");
    scanf("%d",&num);
    if(num>=18)
    printf("Congratulation! you are eligible for casting vote");
    else
    printf("sorry,you are not elligible");
}