//find sum and average of 10 natural numbers.
#include<stdio.h>
int main()
{
    int i,sum=0;
    float avg;
    printf("the first 10 natural numbers are:-\n");
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        avg=sum/10;
        printf("%d\n",i);
        // printf("the sum is:%d\n",sum);
    }
    printf("the sum is:%d\n",sum);
    printf("the average is:%f\n",avg);
}