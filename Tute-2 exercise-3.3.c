#include<stdio.h>
int main(void)
{
	int mark1,mark2,total;
	float average;
	
	printf("Enter your mark 1: ");
	scanf("%d",&mark1);
	
	printf("Enter your mark 2: ");
	scanf("%d",&mark2);
	
	total=mark1+mark2;
	average=(float)total/2;
	
	printf("Your total is:%d\n",total);
	printf("Your average is:%.2f\n",average);
	
	return 0;	
}
