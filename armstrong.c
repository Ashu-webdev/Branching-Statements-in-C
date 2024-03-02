/* To check an inputted number is an armstrong no or not*/
#include<stdio.h>
int main()
{
   int num,num1,rem,sum=0;
   printf("Enter any no:");
   scanf("%d",&num);
   num1=num;
   while (num!=0)
   {
      rem=num%10;
      sum=sum+(rem*rem*rem);
      num=num/10;
   }
   if (num1==sum)
	   printf("%d is armstrong",num1);
   else
	   printf("%d is not armstrong",num1);
}   
   
