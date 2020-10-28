//Binary search in C
#include<stdio.h>
int main()
{
	int c,first, last, mid, n, search, arr[100];
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf ("\nEnter elements in matrix: ");
	for (c=0;c<n;c++)
	{
		scanf("%d", &arr[c]);
	}
	printf("\n Enter the Value user is looking for: ");
	scanf("%d", &search);
	
	first=0;
	last=n-1;
	mid=(first+last)/2;
	
	while(first<=last)
	{
		if(arr[mid]< search)
		{
			first=mid+1;
		}
		else if(arr[mid]== search)
		{
			printf("%d is present at index %d", search, mid+1);
			break;
		}
		else
		{
			last= mid-1;
			mid= (first+last)/2;
		}
		if(first>last)
		{
			printf("Element not Found!");
			
		}
		
	}
	return 0;
}
