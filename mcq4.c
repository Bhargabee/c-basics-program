#include<stdio.h>
void fun();

int  main()
{
    fun();
    fun();
}
    //static int count=5;
    void fun()
    {
        auto int i=0;
        register int j=0;
        static int k=0;
        i++;
        j++;
        k++;
        printf("\n %d %d %d",i,j,k);
    }