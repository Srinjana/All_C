//returns 1 for prime number and zero if not <WITH A TWIST>
#include<stdio.h>

int prime(int);

int main ()
{
	int n, resu;
	
	printf ("\nEnter a number to check if prime: ");
	scanf ("%d" , &n);
	
	if (n<0)
	{
		printf ("\nPlease enter a Positive Number.");
	}
	else
	{
	
	resu= prime(n);

    if (resu==1)
       printf("\n %d is a prime number" , n);
    else
       printf ("\n %d is not a prime number" , n);
       
    return 0;
	}   
}
    int prime(int n)
    {
    	int c;
    	
    	for (c=2; c<=n-1; c++)
    	{
    		if ( n%c ==0)
    		  return 0;
		}
		
		if (c==n)
		   return 1;
	}

