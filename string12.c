// wap to convert all lowercase vowel to uppercase in a string.
#include<stdio.h>
#include<string.h>
void convert(char str[]);
int main()
{
    char str[]="bhargabee";
    convert(str);
    return 0;
}
void convert(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            str[i]=str[i]-'a'+'A';
        }
        printf("%c",str[i]);
    }
}