/* To check whether an inputted number is a prime number or not*/
#include<stdio.h>
int main()
{
   int num,count=0,i;
   printf("Enter any natural no:");
   scanf("%d",&num);
   for (i=1;i<=num;i++)
   {
       if (num%i==0)
          count=count+1;
   }   
   if (count==2)
	printf("%d is a prime no\n",num);
   else
	printf("%d is a composite no\n",num);
}   
