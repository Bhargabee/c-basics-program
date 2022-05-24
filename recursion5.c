//waf to calculate percentage of a student from marks in science,math,sanskrit.

#include<stdio.h>
int percentage(int a,int b, int c);

int main()
{
    int a=38,b=98,c=100,r;
    printf(" %d",percentage(a,b,c));
    return 0;
} 

int percentage(int a,int b, int c)
{
    return( (a+b+c)/3)*100;
}