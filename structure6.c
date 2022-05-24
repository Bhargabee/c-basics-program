//use keyword typedef
#include<stdio.h>
typedef struct student //use of typedef keyword 
{
    char name[100];
    int roll;
} stu;// stu is nickname or alias for student ,we can also use stu instead of student.
int main()
{
    stu s1={"silpa",12};
    printf("student name is = %s\n",s1.name);
    printf("student rollno is = %d\n",s1.roll);

    return 0;
}
