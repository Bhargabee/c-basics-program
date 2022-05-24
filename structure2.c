//array of structures
#include<stdio.h>
#include<string.h>
struct student 
{
    char name[100];
    int rollno;
    float cgpa;

};
int main()
{
    struct student ece[100];
    strcpy(ece[0].name,"pooja sahoo");
    ece[0].rollno=01;
    ece[0].cgpa=6.8;
    printf("name is = %s\n",ece[0].name);
    printf("roll no = %d\n",ece[0].rollno);
    printf("cgpa= %f\n",ece[0].cgpa);
    return 0; 
}