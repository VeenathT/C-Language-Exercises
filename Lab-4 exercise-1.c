//This program diaplay a triangle can be formed or not
#include<stdio.h>
int main(void)
{
	int a1,a2,a3,sum;
	
	printf("Enter the three angles of the triangle:\n");
	scanf("%d%d%d",&a1,&a2,&a3);//read three angles
	
	sum=a1+a2+a3;
	
	if(sum==180)
		printf("Triangle can be formed\n");
	else 
	    printf("Triangle can't be formed\n");
	    
    return 0;
}//end of the main function
