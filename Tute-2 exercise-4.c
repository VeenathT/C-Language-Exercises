#include<stdio.h>
struct item
{
	int itemNo;
	double price;
	int quality;
}item1,item2;
 
 
int main (void)
{
	item1.itemNo=1;
	item1.price=10.00;
	item1.quality=12;
	
	item2.itemNo=2;
	item2.price=15.00;
	item2.quality=4;
	
	printf("ItemNo\tPrice\tQuality\n");
	printf("%d\t%.2f\t%d\n",item1.itemNo,item1.price,item1.quality);
	printf("%d\t%.2f\t%d\n",item2.itemNo,item2.price,item2.quality);
	
	return 0;
}

