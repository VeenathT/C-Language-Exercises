#include<stdio.h>
int main(void)
{
	char tType,w,d;
	float bBal,amount,nBal;
	
	printf("Enter your transaction type:");
	tType= getchar();
	
	if(tType=='w'||tType=='W')
	{
		printf("You have selected to withdraw money\n");
		printf("Enter the amount:");
		scanf("%f",&amount);
		printf("Enter your bank balance:");
        scanf("%f",&bBal);
		nBal=bBal-amount;
		printf("Your new balance is:%.2f",nBal);
	}
	else if(tType=='d'||tType=='D')
	{
		printf("You have selected to deposit money\n");
		printf("Enter the amount:");
		scanf("%f",&amount);
		printf("Enter your bank balance:");
        scanf("%f",&bBal);
		nBal=bBal+amount;
		printf("Your new balance is:%.2f",nBal);
	}
	else
	    printf("You have selected an invalid transaction type");

    return 0;   
}
