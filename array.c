#include<stdio.h>
#include<math.h>
int main()
{
    int x[6],y[6],i,j,seg_len;
    printf("enter value for x");
    for(i=0;i<6;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("enter value for y");
    for(i=0;i<6;i++)

    {
        scanf("%d",&y[i]);
    }
    printf("enter value for i");
    scanf("%d",&i);
    seg_len=sqrt(((x[i+1]-x[i])*(x[i+1]-x[i]))+((y[i+1]-y[i])*(y[i+1]-y[i])));
    printf("seg_len = %d",seg_len);
}