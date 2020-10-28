// check leap year using functions
#include <stdio.h>
 
 int leap(int);
 int main ()
 {
 	int yr, res;
 	printf ("\nEnter the year :");
 	scanf ("%d" , &yr);
 	res= leap(yr);
 	if (res==0)
 	 printf ("\n The year is a leap year.");
 	else 
 	 printf ("\n the year is not  leap year" );
 	 return 0;
 }
 
 int leap(int yr)
 {
 	int b;
 	b= yr%100;
 	
 	if ((b==0 && yr%400==0)||(b!=0 && yr%4==0))
 	  return 0;
 	else
 	  return 1;
 }
