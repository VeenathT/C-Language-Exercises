#include<stdio.h>
int main(void)
{
	float r,d,c,a;
	
	printf("Enter the radius: ");
	scanf("%f",&r);
	
	d=2*r;
	c=2*22.0/7*r;
	a=22.0/7*r*r;
	
	printf("Diameter is:%.2f\n",d);
	printf("Circumference is:%.2f\n",c);
	printf("Area is:%.2f\n",a);
	
	return 0;	
}
