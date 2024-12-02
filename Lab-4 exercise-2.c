//This program calculate the area of the shapes
#include<stdio.h>
int main(void)
{
	
	char name,R,T,C;
	float w,l,h,r,b,aRec,aCir,aTri;
	
	printf("Enter the first character of the shape(R,T,C):");
    scanf("%c",&name);//read name of shape
    
    if(name=='R')
    {
    	printf("Enter the width:");
    	scanf("%f",&w);
    	printf("Enter the length:");
    	scanf("%f",&l);
    	
    	aRec=w*l;
    	printf("Area of rectangle = %.2f",aRec);
	}
	else if(name=='T')
    {
    	printf("Enter the base:");
    	scanf("%f",&b);
    	printf("Enter the height:");
    	scanf("%f",&h);
    	
    	aTri=b*h/2;
    	printf("Area of triangle = %.2f",aTri);
	}
	else if(name=='C')
    {
    	printf("Enter the radius:");
    	scanf("%f",&r);
    
    	aCir=22.0/7*r*r;
    	printf("Area of circle = %.2f",aCir);
	}
	else
	   printf("Invalid character\n");
	
    
	return 0;
}//end of main function
