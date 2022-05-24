#include<stdio.h>
int main()
{
   int a[6],n,i,j,temp;
   printf("enter the total number of element:");
   scanf("%d",&n);
   printf("enter the array elements"); 
   for(i=0;i<n-1;i++)
   {
         for(j=0;j<n-1-i;j++)
         {
            if (a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
         }
   }
   for(i=0;i<6;i++)
   printf("%d",a[i]);
   return 0;
}
