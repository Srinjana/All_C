//Input your name and return Ascii Value
#include <stdio.h>
#include<string.h>
void main ()
{
	char name[50];
	int n ,count=0;
	
	printf ("\n Welcome User! Please Enter your name: ");
	//fgets(name,50,stdin);
	scanf ("%s", name);
	n= strlen(name);
	
	printf ("\nThe ASCII values of the characters in your name are as follows: ");
	
	while (count<n)
	{
	
		printf ("%d  ", name[count++]);
	}
}
