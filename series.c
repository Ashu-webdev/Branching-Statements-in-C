/* To find out the sum of the following series: 1/1!+1/2!+1/3!+...+1/n! */
#include<stdio.h>
int main()
{
   int n,i,fact=1;
   float sum=0.0;
   printf("Enter the value of n:");
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
      fact=fact*i;
      sum=sum+(float)1/fact;
   }
   printf("Sum=%f",sum);
}   
