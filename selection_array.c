#include<stdio.h>
int main()
{
   int i,j,temp;
   int a[5]={2,5,4,7,8} ;
  // for(i=0;i<5;i++)
   //scanf("%d",&a[i]);
   for(i=0;i<5;i++)
   {
       //int max=i;
       for(j=i+1;j<5;j++)
       {
           int max=i;
           if(a[i]<a[j])
           {
           max=j;
           }
       
         if(max!=i)
        {
          temp=a[i];
         a[i]=a[j];
         a[j]=temp;
         }
       }
   }
    for(i=0;i<5;i++)
    {
   printf("%d\t",a[i]);
    }
   return 0;
}