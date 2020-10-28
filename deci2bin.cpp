// decimal to binary using functions 
#include <stdio.h>
#include<math.h>
int main ()
{
	int k,c, number; 
	printf("Enter a decimal number: ");
	scanf ("%d", &number);
	printf("\nIT'S Binary equivalent is:  "), 


for(c=31; c>=0; c--)
{
	k=n>>c;
	
	if(k&1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
printf ("\n");
return 0;
}
