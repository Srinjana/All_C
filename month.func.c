// taking a number input and printing month
# include<stdio.h>

int month(int);
int main ()
{
	int m, res;
	printf ("\n Enter number: ");
	scanf ("%d" , &m);
	
	res= month(m);
	
	if (res==1)
	   printf (" january");
	else if (res==2)
	   printf (" february");
	else if (res==3)
	   printf (" march");
	else if (res==4)
	   printf (" april");
	else if (res==5)
	   printf (" may");
	else if (res==6)
	   printf (" june");
	else if (res==7)
	   printf (" july");
	else if (res==8)
	   printf (" august");
	else if (res==9)
	   printf (" september");
	else if (res==10)
	   printf (" october");
	else if (res==11)
	   printf (" november");
	else if (res==12)
	   printf (" december");
	else 
	return 0;
	
}

int month(int m)
{
	if ((m>12) && (m<1))
	return 0;
}
	
	

