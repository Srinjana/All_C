//Binary to decimal
#include<stdio.h>
int main ()
{
	int binary,decimal=0, weight=1, rem, yo;
	printf ("\nEnter your binary number: ");
	scanf ("%d", &binary);
	yo= binary;
	while (binary!=0)
	{
		rem=binary%10;
		decimal+= (rem*weight);
		binary= binary/10;
		weight= weight*2;
	}
	
	printf ("\nTHE DECIMAL EQUIVALENT OF %d is %d", yo, decimal);
	return 0;
}
