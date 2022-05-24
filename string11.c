//check if a given character is present in a string or not.

#include<stdio.h>
#include<string.h>
void checkchar(char str[],char ch[]);
int main()
{
    char str[]="i am a good girl";
    char ch='w';
    checkchar(str,ch);
    return 0;
}
void checkchar(char str[],char ch[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("character is present in a string");
            return ;
        }
    }
    printf("character is not present");

}