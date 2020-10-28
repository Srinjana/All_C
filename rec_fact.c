// finding factorial using recursion
#include<stdio.h>
long int fact(int n);
int main ()
{
	int n, res;
	printf ("\nEnter any number: ");
	scanf ("%d", &n);
	res= fact(n);
	printf ("\nThe factorial %ld" , res);
	return 0;
}

long int fact(int n)
	 
{
		int res;
		
		if (n==0)
		{ 
		  res= 1;
		}
		
		else
		{
		res= n* fact (n-1);
	    }
		
		return res;
		
}

