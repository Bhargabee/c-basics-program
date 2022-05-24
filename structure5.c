//passing structure to fun.
#include<stdio.h>
struct student 
{
    char name[100];
    int roll;
};
 void printinfo(struct student s1);
int main()
{
    struct student s1={"reema",12};
    printinfo(s1);
    return 0;
}
void printinfo(struct student s1)
{
    printf("student informations:- \n");
    printf("student name is = %s\n",s1.name);
    printf("student rollno is = %d\n",s1.roll);

}