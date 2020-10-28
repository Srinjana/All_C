// c program to perform linear search
#include<stdio.h>
int main()
{
	int arr[5], i,x;
	printf("Enter array elements:");
	for (i=0; i<5;i++)
	{ 
	  scanf("%d" , &arr[i]);
	}
	printf ("Enter element to search:");
	scanf("%d", &x);
	for (i=0;i,5;i++)
	{
	
	  if (x==arr[i])
	 {  
  		printf("\n Element found!");
        break;
     }  
    }
	if (i==5) 
	{
		printf ("\nNot found!!!");
	}
	
	return 0;
}
