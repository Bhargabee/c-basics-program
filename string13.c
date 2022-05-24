// wap to remove blank spaces in a string.
#include<stdio.h>
#include<string.h>
void change(char str[]);
int main()
{
    char str[]="p o o j a s a h o o ";
   change(str);
   puts(str);
    return 0;
}
void change(char str[])
{
    int count=0;
    for(int i=0;str[i];i++)
    
        if(str[i]!=' ')
        
         
            str[count++]=str[i];
            str[count]='\0';
}