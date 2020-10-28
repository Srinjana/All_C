// swapping variables by using functions
#include<stdio.h>
void swap(int*,int*);
void main()
{
   	int a, b;
   	printf ("\nEnter the required values of a and b:");
   	scanf ("%d %d", &a,&b);
   	printf("\nBefore swap :%d \t %d \t", a,b);
   	swap(&a, &b);
}
   
void swap(int*x,int*y)
{
   	int temp;
   	temp=*x;
   	*x=*y;
   	*y=temp;
   	printf("\nAfter swap: %d\t %d \t", *x, *y);
}
