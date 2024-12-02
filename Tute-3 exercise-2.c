#include<stdio.h>
int main(void)
{
	int no;
	
	printf("Enter your five-digit number: ");
	scanf("%d",&no);
	
	printf("%d\t%d\t%d\t%d\t%d\t",no/10000,no/1000%10,no/100%10,no/10%10,no%10);
	
	return 0;
	
}
