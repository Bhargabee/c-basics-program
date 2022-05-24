// find the salted form of password entered by user if the salt is "123" & added at the end.
//important qu.
#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main()
{
    char password[100];
    printf("my password is: ");
    scanf("%s",password);
    
    salting(password);
}
void salting (char password[])
{
    char salt[]="123";
    char newpassword[100];
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    puts(newpassword);
}