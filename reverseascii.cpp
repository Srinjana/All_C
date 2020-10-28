#include<stdio.h>
int main ()
{
	int num;
	printf ("Enter a number ");
	scanf ("%d" , &num);
	if (num>=0 && num<=127)
	{
		printf ("character is %c", num);
		
	}
	else
	{
		printf("ERROR");
		
	}
	return 0;
}
