//calculate total ,percentage and division.
#include<stdio.h>
#include<string.h>
int main()
{
    int rollno, m,p,c,total;
    float per;
    char name,div;
    printf("roll number of the student is");
    scanf("%d",&rollno);
    printf("enter the name of the student");
    scanf("%s",&name);
    printf("marks in math is:");
    scanf("%d",&m);
    printf("marks in physics is:");
    scanf("%d",&p);
    printf("marks in chemistry is");
    scanf("%d",&c);
    total=m+p+c;
    printf("total marks in three subjects is:%d\n",&total);
    per=(total/3.0);
    printf("percentage of the student is:%f\n",per);
    if(per>60)
    printf("1st division");
    else
    printf("fail");
}