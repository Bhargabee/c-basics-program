//waf to convert celsicus to farenhit
#include<stdio.h>
float convert(float celsius);

int main()
{
    printf("%.1f",convert(0));
    return 0;
}
float convert(float celsius)
{
    float f= celsius*(9.0/5.0)+32;
    return f;
}