//wap to allocate memory to store 5  prices.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr= (float*) malloc(5*sizeof(float));
    ptr[0]=76;
    ptr[1]=54;
    ptr[2]=65;
    ptr[3]=99;
    ptr[4]=23;
    for(int i=0;i<5;i++)
    {
        printf("%f\n",ptr[i]);
    }
    return 0;

}
