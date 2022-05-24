//initialization of structure
#include<stdio.h>
#include<string.h>
struct student 
{
    char name[100];
    int roll;
};
int main()
{
    struct student s1={"pooja",20};
    struct student s2={"sikha",15};
    struct student s3={"soni",10};
    printf("name = %s\n",s1.name);
     printf("rollno = %d\n",s1.roll);
    return 0;
    
}
