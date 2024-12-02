#include<stdio.h>
int main (void)
{
	double totalpay,finalpay,discount;
	
	printf("Enter the total payment of a custormer: ");
	scanf("%lf",&totalpay);
	
	discount=totalpay*(15/100);
	finalpay=totalpay+discount;
	
	printf("discount:%.2f\n",discount);
	printf("Final payment:%.2f\n",finalpay);
	
	return 0;
}
