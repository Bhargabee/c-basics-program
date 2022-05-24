//waf named slice , which takes a string & returns a sliced string from index n to m
#include<stdio.h>
#include<string.h>
void slice(char name[],int n, int m);
int main()
{
    char name[]="poojasahoo";
    slice(name,3,5);
    return 0;
}
void slice(char name[], int n, int m)
{
    char newname[100];
    int j,i;
    for( i=n,j=0;i<=m;i++,j++)
    {
        newname[j]=name[i];
    }
        newname[j]='\0';
        puts(newname);
    
}