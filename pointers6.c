//wap to find the max.number between two number using pointer
#include<stdio.h>
int main()
{
    int a=10,b=6,*ptr1=&a,*ptr2=&b;
    if(*ptr1>*ptr2)
    {
        printf("maximum number is :%d",*ptr1);
    }
    else
    {
        printf("maximum number is :%d",*ptr2);
    }
    return 0;
}
