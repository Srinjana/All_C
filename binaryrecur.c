// binary search in recursion
#include<stdio.h>

void bin (int[], int, int, int);
void bubble(int[], int);
int main ()
{
	
	int key, size, i;
	int list[25];
	
	printf ("enter size of the list : ");
	scanf ("%d", &size);
	
	printf ("\n Enter elements: ");
	for (i=0; i < size; i++)
	
		 scanf ("%d" , list[i]);
	
	bubble (list,size);
	printf ("\n ENter key to search: ");
	scanf ("%d", &key);
	bin(list, 0, size, key);
}

void bubble(int list[], int size)
{
	int temp, i, j;
	for (i=0; i< size ; i++)
	{
		for (j=i; j< size; j++)
		{
			if (list[i]> list[j])
			{
				temp= list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
}

void bin (int list[], int lo, int hi, int key)
{
	int mid;
	if (lo>hi)
	{ 
	  printf("\n KEY NOT FOUND!");
	
	} 
	if (list[mid] == key)
	{
		printf ("\n Key Found! ");
		
	}
	
	else if (list[mid] > key)
	{
		bin (list, lo, mid-1, key);
		
	}
	
	else if  (list[mid] < key)
	{
		bin (list, mid+1,hi, key);
	}

}
