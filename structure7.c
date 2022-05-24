//enter address(houseno,block,city,state) of 5 people.
#include<stdio.h>
struct address
{
    int houseno;
    int blockno;
    char city[100];
    char state[100];
};
void printadd(struct address add);
int main()
{
    struct address add[5];
    //input
    printf("enter information for 1st person : \n" );
    scanf("%d\n",&add[0].houseno);
    scanf("%d\n",&add[0].blockno);
    scanf("%s\n",add[0].city);
    scanf("%s\n",add[0].state);
    printadd(add[0]);
    //printadd(add[1]);
    //printadd(add[2]);
    //printadd(add[3]);
    //printadd(add[4]);
    return 0;
}
void printadd(struct address add)
{
    printf("address is : %d, %d, %s, %s\n",add.houseno,add.blockno,add.city,add.state);
}