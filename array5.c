//multidimensional array "marks of 3 subjects of 2 students"
#include<stdio.h>
int main()//2*3
{
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=67;
    marks[0][2]=89;
    
    marks[1][0]=88;
    marks[1][1]=56;
    marks[1][2]=98;
    printf("%d\n",marks[0][0]);
    printf("%d\n",marks[0][1]);
    printf("%d\n",marks[0][2]);
    printf("%d\n",marks[1][0]);
    printf("%d\n",marks[1][1]);
    printf("%d\n",marks[1][2]);
    return 0;

}