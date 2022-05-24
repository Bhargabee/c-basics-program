#include<stdio.h>
int fun(int);
int  main()
{
    int a,b;
    a=fun(239);
    b=fun(239);
    printf("%d,%d\n",a,b);
    return 0;
}
    int fun(int n)
    {
         int s,d;
        if(n!=0)
        {
            d=n%10;
            n=n/10;
            s=d+fun(n);

        }
        else
        return 0;
        return s;
    }