#include<stdio.h>
void main()
{
	int x=10;
	int y=5;
	printf("\n values before swapping");
	printf("\n x=%d \n y=%d \n",x,y);
	//add swap logic here
	int temp=x;
	x=y;
	y=temp;
	printf("\n values after swapping");
	printf("\n x:%d \n y=%d",x,y);
}
