//stack operations in DATA STRUCURE
#include <stdio.h>
#define ms 5
int s[100], rpt, ch, top, item,i;
void pop();
void push();
void peep();

void main ()
{
	top= -1;
	printf ("\nSTACK OPERATIONS USING ARRAY!");
	printf ("enter your choice\n 1= push\n 2= pop\n 3=peep");
	do 
	{
		printf("\nEnter your choice: ");
		scanf ("%d", &ch);
		switch (ch)
		{ 
			case 1: 
			  	{
					push();
					break;
			 	}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					peep();
					break;
				}
			default:
				
					printf ("ERROR!");
				
		}
	}
	while (ch!=3);
}


void push()
{
	if (top>=ms-1)
	{
		printf ("# STACK OVERFLOW #");
	}
	else
	{
		printf("\n Enter a value to be pushed: ");
		scanf ("\n%d", &item);
		top++;
		s[top]=item;
		
	}
}

void pop ()
{
	if (top<=-1)
	{
		printf ("\nTHE STACK IS UNDERFLOW!");
	}
	else 
	{
		printf ("\nThe popped element is + %d", s[top]);
		top--;
	}
}


void peep()
{
	if (top>=0)
	{
		printf ("\nElements in the stack are: ");
		for (i= top; i>=0; i--)
		{
			printf ("\n%d", s[i]);
			printf ("");
		}
	}
	else
	{
		printf ("\nStack is Empty!");
	}
}
