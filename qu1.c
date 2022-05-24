//student marks sum
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int marks_summation(int *marks,int number_of_students,char gender);
int main()
{
    int number_of_students;
    char gender;
    //int marks;
    //printf("enter number of students");
    scanf("%d",&number_of_students);
    //printf("%d\n",number_of_students);
   int *marks=(int*)malloc(number_of_students*sizeof(int));
    for(int i=0;i<number_of_students;i++)
    {
        scanf("%d",(marks+i));
    }
    scanf("%c",&gender);
    int sum=marks_summation(marks,number_of_students,gender);
    printf("%d",sum);
    return 0;
}
int marks_summation(int *marks,int number_of_students,char gender)
{
    int sum;
    for(int i=0;i<number_of_students;i+=2)
    {
        if(gender=='b')
        {
            sum=sum+marks[i];
        }
    }
    for(int i=1;i<number_of_students;i+=2)
    {
        if(gender=='b')
        {
            sum=sum+marks[i];
        }
    }
    return sum;
}