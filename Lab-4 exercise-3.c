//This program calculates the total cost of package that input by the user
#include<stdio.h>
int main(void)
{
	int no,paktype;
	
	printf("Enter the number of people:");
	scanf("%d",&no);//read the number of people
	
	printf("Enter the package type(1,2,3):");
	scanf("%d",&paktype);//read package type
	
	switch(paktype)
	{
		case 1 : printf("Your total cost =%d\n",no*2000);
	             break;
		case 2 : printf("Your total cost =%d\n",no*5000);
		         break;	
		case 3 : printf("Your total cost =%d\n",no*7000);
		         break;	
		default : printf("Invalid package type\n");		 				 		
	}
	
	return 0;
}//end of main function
