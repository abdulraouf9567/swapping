#include<stdio.h>
void main()
{
	void swap(int *x,int *y)
	{
		int temp=*x;
		*x=*y;
		*y=temp;
	}
	int x=10;
	int y=5;
	printf("\n values before swapping");
	printf("\n x=%d \n y=%d \n",x,y);
	//add swap logic here
	swap(&x,&y);

	printf("\n values after swapping");
	printf("\n x:%d \n y=%d",x,y);
}


Logic without using temp variable

a = a+b
b = a-b
a = a-b
