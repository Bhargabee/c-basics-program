// take a string input from user using %c.
 #include<stdio.h>
 int main()
 {
     char str[100];
     char ch;
    int i=0;
    while(ch!='\n')// \n means user have to press enter
    {
        scanf("%c",&ch);
        str[i]=ch;
        i++;

    }
    str[i]='\0';
    puts(str);

 }
