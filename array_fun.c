//find the area of a polygon by using given formula.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define size 20;
 void get_corners(double x[],double y[]);
 void output_corners(double x[],double y[]);
 void polygon_area(double x[],double y[]);
int main()
{
    double x[],double y[];
    int A;
    get_corners(x,y);
    output_corners(x,y);
    polygon_area(x,y);
    printf("%d",A);
    return 0;
}
void get_corners(double x[],double y[])
{
    
    int i;
    for(i=0;i<size;i++)
    printf("%lf\t%lf\n",x[i]y[i]);
}
void output_corners(double x[],double y[])
{
    int i;
    for(i=0;i<size;i++)
    scanf("%lf\t%lf\n",&x[i]y[i]);
}
void polygon_area(double x[],double y[])
{
    int A=0,i;
    for(i=0;i<=18;i++)
    A=A+(1/2*(x[i+1]+x[i])*(y[i+1]-y[i]));
   int abs(int A);
}