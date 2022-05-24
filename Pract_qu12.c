//temperature reading.
#include<stdio.h>
int main()
{
    float temp;
    printf("TEMPERATURE OF THE DAY-");
    scanf("%f",&temp);
    if(temp<0)
    printf("frizing weather\n");
    else if(temp<10)
    printf("very cold weather\n");
    else if(temp<20)
    printf("cold weather\n");
    else if(temp<30)
    printf("normal in temperatute\n");
    else if(temp<40)
    printf("its hot\n");
    else
    printf("its very hot\n");
}