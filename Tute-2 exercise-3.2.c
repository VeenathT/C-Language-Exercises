#include<stdio.h>
int main(void)
{
	int mark1,mark2,total;
	
	printf("Enter your mark 1: ");
	scanf("%d",&mark1);
	
	printf("Enter your mark 2: ");
	scanf("%d",&mark2);
	
	total=mark1+mark2;
	
	printf("Your total is:%d",total);
	
	return 0;	
}
