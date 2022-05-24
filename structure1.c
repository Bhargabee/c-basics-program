//wap to store data of 3 students.
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
    struct student s1;
    strcpy(s1.name,"pooja");
    s1.rollno=10;
    s1.cgpa=9.2;
    printf("1st student name is = %s\n",s1.name);
    printf("1st student rollno = %d\n",s1.rollno);
    printf("1st student cgpa is = %f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name,"sikha");
    s2.rollno=20;
    s2.cgpa=8.8;
    printf("2nd student name is = %s\n",s2.name);
    printf("2nd student rollno is = %d\n",s2.rollno);
    printf("2nd student cgpa is = %f\n", s2.cgpa);

    struct student s3;
    strcpy(s3.name,"suvam");
    s3.rollno=33;
    s3.cgpa=9.1;
    printf("3rd student name is =%s\n",s3.name);
    printf("3rd student rollno is=%d\n",s3.rollno);
    printf("3rd student cgpa is =%f\n",s3.cgpa);

    return 0;

}