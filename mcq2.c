#include<stdio.h>
int i=0;
val();
{
    i=100;
    printf("\nval's i=%d",i);
    i++;
}
main()
{
    printf("\n mains i=%d",i);
    i++;
    val();
    printf("\n mains i=%d",i);
    val();
}

