//pointer to structure
#include<stdio.h>
struct student 
{
    int roll;
    char name[100];
};
int main()
{
    struct student s1={12,"SITA"};
    printf("student rollno = %d\n",s1.roll );
    struct student *ptr=&s1;
    printf("student roll no= %d\n",(*ptr).roll);
    return 0;

}