//create a string firstname and lastname to store detils of user and print all the characters using a loop.
#include<stdio.h>
void printstrings(char arr[]);
int main()
{
    char firstname[]="pooja";
    char lastname[]="sahoo";
    printstrings(firstname);
    printstrings(lastname);
    return 0;
}
void printstrings(char arr[])
{
    for(int i=0;arr[i]!=0;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}