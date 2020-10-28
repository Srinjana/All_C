//INFIX TO POSTFIX CONVERSION IN STACK
 #include<stdio.h>
 #define ms 20
char stack[];
int top=-1;
void push (char x)
{
	if (top==ms-1)
	{
		printf("STACK OVERFLOW!");
	}
	else
	{
		stack[++top]= x;
    }
}

char pop ()
{
	if (top==-1)
		return -1;
	else
		return stack[top--];
} 

int priority (char x)
{
	if (x=='(')
		return 0;
	if (x=='+' || x=='-')
		return 1;
	if (x=='*' || x=='/')
		return 2;
}

main ()
{
	
}

