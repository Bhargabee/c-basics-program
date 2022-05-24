//uppercase or not
#include<stdio.h>
int main()
{
    char character;
    printf("enter a character ");
    scanf("%c",&character);
    if(character >='A'&& character<='Z')
    {
        printf("UPPER CASE");

    }
    else if(character>='a'&& character <='z')
    {
        printf("lower case");

    }
    return 0;
}