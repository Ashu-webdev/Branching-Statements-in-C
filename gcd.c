/* To find out the gcd of two nos*/
#include<stdio.h>
int main()
{
   int num1,num2,dividend,divisor,rem;
   printf("Enter the value of num1 and num2:");
   scanf("%d%d",&num1,&num2);
   if (num1>num2)
   { 
      dividend=num1;
      divisor=num2;
   }
   else
   {
      dividend=num2;
      divisor=num1;
   }
   while (divisor)
   {
      rem=dividend%divisor;
      dividend=divisor;
      divisor=rem;
   }
   printf("GCD of %d and %d is %d\n",num1,num2,dividend);
}   
