//use of strlen(library function)
#include<stdio.h>
#include<string.h>
int countlength(char arr[]);
int main()
{
    char str[]="pooja";
    strlen(str);
    printf("length is %d",strlen(str));
    return 0;
}
