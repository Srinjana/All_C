 // sum of natural nos by recursion 
#include<stdio.h>

int add (int n);

int main ()

{ 
   int num=0 ;
   
   printf ("\nEnter the number:");
   scanf ("%d" , &num);
   printf ("\n The sum = %d", add(num));
   return 0;
}
   
int add (int n)
  {
  	if (n!=0)
  	 return n+ add (n-1);
  	 
  	else
  	 return n;
   } 
