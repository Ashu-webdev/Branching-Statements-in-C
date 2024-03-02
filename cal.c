/* To write a menu driven program to implement a calculator*/
#include<stdio.h>
int main()
{
   int num1,num2,ch;
   char choice='y';
   while (choice=='y'||choice=='Y')
   {
      printf("\n Menu\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Quit\n Enter your choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
	      case 1:printf("\n Enter 2 nos:");
                     scanf("%d%d",&num1,&num2);
                     printf("\n Addition Result=%d",num1+num2);
                     break;
              case 2:printf("\n Enter 2 nos:");
		     scanf("%d%d",&num1,&num2);
		     printf("\n Subtraction Result=%d",num1-num2);
		     break;
	      case 3:printf("\n Enter 2 nos:");
              	     scanf("%d%d",&num1,&num2);
	             printf("Multiplication Result=%d",num1*num2);
	             break;
	      case 4:printf("\n Enter 2 nos:");
	             scanf("%d%d",&num1,&num2);
	             printf("Division Result=%d",num1/num2);
		     break;
	      case 5:break;
	      default:printf("Invalid choice");
	 }
         printf("\n Do you want to continue y/n:");
         scanf(" %c",&choice);
     }
   
}            	       
