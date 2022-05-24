//use of realloc() wap to allocate memory for 5 nos and dynamically increases it to 8 nos.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *) calloc(5,sizeof(int));
    printf("enter nos (5) : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d\n",&ptr[i]);
    }
    ptr=realloc (ptr,8);
    printf("enter number(8):\n");
    for(int i=0;i<8;i++)
    {
        printf("number are %d\n is %d",i,ptr[i]);
    }
    return 0;
}