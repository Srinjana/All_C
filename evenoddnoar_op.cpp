// checking ever or odd by using no arithmatic operators
#include<stdio.h>
int main ()
{
	int number;
	printf ("\nENTER ANY NUMBER: ");
	scanf ("%d", &number);
	//checking if the 0th bit is zero or one
	(number & 0x01) ? printf("%d is ODD!", number) : printf("%d is EVEN!", number);
	printf("/n");
	return 0; 
} 
