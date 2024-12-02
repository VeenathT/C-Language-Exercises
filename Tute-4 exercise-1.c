//This program displays the positive number 
#include<stdio.h>
int main(void)
{
	int no;
	
	printf("Enter the integer number:");
	scanf("%d",&no);//read number
	
	if(no<0)
	{
		no=no*(-1);
		printf("Number is :%d",no);
	}
	else 
	   printf("Number is :%d",no);
	   
   return 0;
}//end of main function
