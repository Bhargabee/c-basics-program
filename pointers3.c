//swap two numbers,a&b
#include<stdio.h>
void swap(int a,int b);
int main()
{
    int x=3,y=5;
    swap(x,y);
    printf("x=%d\ny=%d",x,y);
    return 0;

}
//call by value..........
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    printf("a=%d\nb=%d\n",a,b);
}