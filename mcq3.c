#include<stdio.h>
int  main()
{
    static int count=5;
    printf("%d",count--);
    if(count!=0)
    main();


}