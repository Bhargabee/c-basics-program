//structure program
#include<stdio.h>
struct stud
{
    int rollno;
    char name[10];
    char depart[10];
    char course[10];
    int y;
}
number_of_stud[450]={01,"pooja","cs","mca",2021,
                     02,"sikha","cs","mca",2019,
                     03,"mili","cs","mca",2021,
                     04,"karan","cs","mca",2019,
                     05,"suvam","cs","mca",2021,
                     };
void stud_in_year(int y)
{
    int i;
    printf("year of joining of the student =%d\n",y);
    for(i=0;i<=450;i++)
    {
        printf("rollnumber=%d\n",number_of_stud[i].rollno);
        printf("name=%s\n",number_of_stud[i].name);
        printf("depart=%s\n",number_of_stud[i].depart);
        printf("course=%s\n",number_of_stud[i].course);

    }
}
void stud_detail(int rcv)
{
    int i;
    printf("rollnumber=%d",rcv);
    for(i=0;i<=450;i++)
    {
        if(number_of_stud[i].rollno==rcv)
        {
        printf("name=%s\n",number_of_stud[i].name);
        printf("department=%s\n",number_of_stud[i].depart);
        printf("course=%s\n",number_of_stud[i].course);
        printf("year_of_joining=%d\n",number_of_stud[i].y);
        }

    }
}
int main()
{
    int y,rollno;
    printf("enter year_of_joining of each student in a particular year= ");
    scanf("%d",&y);
    stud_in_year( y);
    getchar();
    printf("enter the data of a student whose rollno is recieved=");
    scanf("%d",&rollno);
    stud_detail(rollno);
    getchar();
    return 0;
}