#include<stdio.h>
int get_min_range(int *a);
int main()
{
    int a[4]={4,2,6,1},min;
    get_min_range(a);
    printf("%d",min);
    return 0;
}
int get_min_range(int a[])
{
    int i,min=a[0];
    for(i=0;i<=4;i++)
    {
        if(min>a[i])
        {
        min=a[i];
        }
    }
    if(min!=a[0])
    {
        printf("%d\n",min);
    }
    return min;
}