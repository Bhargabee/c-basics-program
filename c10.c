//wap to check given character is digit or not
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>='0'&& ch<='9')
    {
        printf("it is a digit");
    }
    else{
        printf("it is not a digit");
    }
    return 0;
}