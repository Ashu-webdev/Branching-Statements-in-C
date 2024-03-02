/* To display the binary equivalent of this decimal number*/
#include<stdio.h>
#include<math.h>
int main()
{
   int dec,bin=0,i=0,rem;
   printf("Enter any decimal no:");
   scanf("%d",&dec);
   while (dec!=0)
   {
      rem=dec%2;
      bin=bin+rem*pow(10,i);
      dec=dec/2;
      i++;
   }
   printf("Binary equivalent of inputted decimal no is %d\n",bin);
}   
