/* To display the fibonacci seroies up to the nth term*/
#include<stdio.h>
int main()
{
   int f0=0,f1=1,f2,i,n;
   printf("Enter the value of n:");
   scanf("%d",&n);
   if (n==1)
	printf("%d",f0);
   else
   {
      if (n==2)
         printf("%d\t%d",f0,f1);
      else
      {
         if (n>2)
         {
            printf("%d\t%d\t",f0,f1);
            for (i=1;i<=n-2;i++)
	    {
	       f2=f0+f1;
               printf("%d\t",f2);
               f0=f1;
               f1=f2;
            }
         }
       }
     }
}   
