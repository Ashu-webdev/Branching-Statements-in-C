/* To display the decimal equivalent of a binary number*/
#include<stdio.h>
#include<math.h>
int main()
{
   int bin,dec=0,i=0,rem;
   printf("Enter any binary no:");
   scanf("%d",&bin);
   while (bin!=0)
   {
      rem=bin%10;
      dec=dec+rem*pow(2,i);
      bin=bin/10;
      i++;
   }
   printf("Decimal equivalent of inputted binary no is %d\n",dec);
}
      	   
