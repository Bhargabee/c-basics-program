//eligibility check.
#include<stdio.h>
int main()
{
    int m,p,c,total,mp;
    printf("ELIGIBILTY CRITERIA:");
    printf("marks in maths>=65");
    printf("marks in physics>=55");
    printf("marks in chemistry>=50");
    printf("total marks in all three subject >=190");
    printf("or total in maths and physics>=140");
    printf(".................................\n");
    printf("marks obtained in maths is=");
    scanf("%d",&m);
    printf("marks obtained in physics is=");
    scanf("%d",&p);
    printf("marks obtained  in chemistry is=");
    scanf("%d",&c);
    printf("total marks obtained is=%d\n",m+p+c);
    printf("total marks in math and physics is=%d\n",m+p);
    

    if(m>=65)
    if(p>55)
    if(c>=50)
    if((m+p+c)>=190 || (m+p)>=140)
    printf("the candidate is eligible for admission");
    else
    printf("the candidate is not eligible");
    else
    printf("the candidate is not eligible");
    else
    printf("the candidate is not eligible");

}