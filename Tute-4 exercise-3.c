//This program create a calculater
#include<stdio.h>
int main(void)
{
	float no1,no2,ans;
	char operate;
	
	printf("Enter the operator :");
	scanf("%c",&operate);//read the operator
	
	printf("Enter your tow numbers:\n");
	scanf("%f%f",&no1,&no2);//read two numbers
	
	if(operate=='+')
	{
		printf("Answer =%.2f",ans=no1+no2);
	}
	else if(operate=='-')
	{
		printf("Answer =%.2f",ans=no1-no2);
	}
	else if(operate=='*')
	{
		printf("Answer =%.2f",ans=no1*no2);
	}
	else if(operate=='/')
	{
		printf("Answer =%.2f",ans=no1/no2);
	}
	else
	    printf("Invalid operator");
	
  return 0;	
}//end of main function
