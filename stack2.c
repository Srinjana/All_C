//INPUT STRING AND REVERSE USING STACK
#include<stdio.h>
#include<string.h>
#define MAX 10

int top=-1;
int item;

char stack_string[MAX];
void push (char item);
void pop ();

int main()
{
	char str[MAX];
	int i,len;
	
	
	printf ("Input a string: ");
	scanf("%s", &str);
	
	len= strlen(str);
	
	for(i=0;i< len ;i++)
		push (str[i]);
	
	printf("\nREVERSE STRING: ");	
	for (i=0; i< len ;i++)
		pop();
		
	return 0;
		
}

void push (char item)
{
	if(top==MAX-1)
	{
		printf("\nSTACK OVERFLOW!");
	}
	else
	{
		stack_string[++top]= item;
	}
}

void pop ()
{
	char item;
	if (top==-1)
	{
		printf ("\nSTACK UNDERFLOW!");
	}
	else
	{
		item= stack_string[top];
		top= top-1;
		printf ("%c", item);	
	}
}
