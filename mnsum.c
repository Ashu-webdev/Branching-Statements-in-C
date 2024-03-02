/*To calculate the sum of the numbers from m to n which will be inputted by user*/
#include<stdio.h>
int main()
{
   int m,n,sum=0,i;
   printf("Enter m & n:");
   scanf("%d%d",&m,&n);
   while(i<=n)
   {
      sum=sum+i;
      i++;
   }
   printf("Sum=%d\n",sum);
}   
