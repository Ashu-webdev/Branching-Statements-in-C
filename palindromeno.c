/* To check whether an inputted number is a palindrome no or not*/
#include<stdio.h>
int main()
{
   int num,num1,rem,rev=0;
   printf("Enter any no.:");
   scanf("%d",&num);
   num1=num;
   while(num!=0)
   {
      rem=num%10;
      rev=(rev*10)+rem;
      num=num/10;
   }
   if (rev==num1)
	printf("%d is pallindrome",num1);
   else
	printf("%d is not  pallindrome",num1);
}   
