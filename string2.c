//make a program that inputs user name and print its length
#include<stdio.h>
void printstr(char arr[]);
int countlength(char arr[]);
int main()
{
    char name[100];
    fgets(name,100,stdin);
    printf("length is:%d",countlength(name));
    return 0;
}
int countlength(char arr[])
{
    int count=0;
    for(int i=0; arr[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}
void printstr(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
}