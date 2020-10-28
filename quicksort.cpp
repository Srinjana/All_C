//Quick sort
#include<stdio.h>
void swap(int *x, int *y)
{
	int Temp;
	Temp = *x;
	*x = *y;
	*y = Temp;
}

void quicksort(int a[], int first, int last)
{
	int pivot, i, j;
	
	if (first < last)
	{pivot= first;
	 i= first;
	 j= last;
	 
	 while (i<j)
	 {
		while (a[i] <= a[pivot] && i < last)
	    i++;
		
		while (a[j] > a[pivot])
		j--;
		
		if (i<j)
		{
			swap(&a[i], &a[j]);
		}
		swap(&a[pivot], &a[j]);
		quicksort(a, first, j - 1);
		quicksort(a, j + 1, last);
      }
    }
}

int main ()
{
	int a[100], number, i;
	printf("\nEnter number of elements: ");
	scanf ("%d", &number);
	printf ("\nEnter array elements: ");
	for (i=0; i< number; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	quicksort(a, 0, number - 1);
	printf("\nSorted array: ");
	for (i=0; i<number; i++ );
	{
		printf("%d", a[i]);
	}
	return 0;
}
