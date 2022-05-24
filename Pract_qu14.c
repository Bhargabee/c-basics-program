//sum of 1st ten natural numbers.
#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("FIRST 10 NATURAL NUMBERS ARE:-\n");
        for(i=1;i<=10;i++)
        {
          sum=sum+i;
            printf("%d\n",i);
        }
    printf("%d\n",sum);
}