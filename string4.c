//use of strcpy (library function)
#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="bhargabee";
    char title[]="sahoo";
    strcpy(name,title);
    puts(name);
    return 0;
}