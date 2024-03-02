/* To print the multiplication table of any inputted number*/
#include<stdio.h>
int main()
{
   int i,num;
   printf("Enter  the  value of num:");
   scanf("%d",&num);
   printf("Multiplication table of %d is as follows:\n",num);
   for (i=1;i<11;i++)
   {
      printf("%d*%d=%d\n",num,i,num*i);
   }
}   
