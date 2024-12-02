#include<stdio.h>
int main(void)
{
	char opr;
	float no1,no2,ans;

	printf("Enter the operator");
	opr=getchar();
		
	printf("Enter the two numbers:");
	scanf("%f%f",&no1,&no2);
	

	
	switch(opr)
	{
		case '+':printf("Answer=%.2f",ans=no1+no2);
		         break;
		case '-':printf("Answer=%.2f",ans=no1-no2);
		         break;
		case '*':printf("Answer=%.2f",ans=no1*no2);
		         break;
		case '/':printf("Answer=%.2f",ans=no1/no2);
                 break;
		
	}
	
	return 0;
}
