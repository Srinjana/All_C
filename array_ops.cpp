#include<stdio.h>
void bubble_sort (int arr[], int n);
void midchar (int arr[], int n);
int segregate(int arr[], int n);
int no_rep (int arr[], int n);
void increment (int arr[], int n);
void alt (int arr[], int n);


void main()
{
  	int arr[]={1,2,3,1,4,5,6,4,1};
  	int n=0,x,seg,c;

  	n= sizeof(arr)/sizeof(arr[0]);
  	printf("the size of the array is: %d " , n);
  	printf("\n"); 
  
  	printf("the alt elements of the array are");
  	printf("\n");
  	alt(arr,n);

  	printf ("\n the incremented array: ");
  	increment(arr,n);

  	printf("\n the number of non repeated elements: ");
	x= no_rep(arr,n);
	printf("%d", x);
	
	printf("\nThe segregated array with zeros and ones are: ");
	seg= segregate (arr,n);
	printf("%d", seg);
	
	printf("the modified array after increasing mid element by 10 is: ");
	midchar (arr,n);
	
     bubble_sort(arr, n);
     printf("\n Bubble Sorted list in ascending order:\n");
     for (c = 0; c < n; c++)
     {
		printf("%ld\n", array[c]);
	 }
}

void alt(int arr[], int n)
{
   int i=0;
   for (i=0; i<n ; i+=2)
	{
	printf ("%d ,", arr[i]);
	}
}


void increment(int arr[], int n)
{
  int i=0;
  for (i=0; i< n ; i++)
	{  
	arr[i]= arr[i]+1;
	printf ("%d ," , arr[i]);
	}
}


int no_rep (int arr[], int n)
{
   int i=0,j=0,k=0,size, count=0;
   int *ptr;
   size=n;
   ptr= arr;
   for (i=0; i<size; i++)
    { 
	for (j=0; j<size ; j++)
        {
		if (i==j)
      		{
			continue;
		}
 		else if (*(ptr+i) == *(ptr+j))
		{
			k=j;
			size--;
			while (k< size)
			{
				*(ptr+k)= *(ptr+k+1);
				k++;
 			}
  		        j = 0;

		}
	}
   }
   for (i=0; i< size; i++)
	{
		count++;
	}
   return count;
}


int segregate(int arr[], int n)
{
   int i=0, j=0, k=0, newarr[];
   int count;
	for (i=0; i<n;i++)
	{
			if arr[i]==0;
		{
			count++;
		}
    }
    for(i=0; i<count; i++)
    {
    	arr[i]=0;
	}
	for (i=count; i<n; i++)
	{
		arr[i]= 1;
	}
	for (i=0; i<n;i++)
	{
		newarr[i]=arr[i];
	}
	
	return newarr;
}


void midchar (int arr[], int n)
{
	int diff,posi,i;
	posi= n/2;
	diff= arr[posi]+10,
	for (i= n-1; i>= posi; i--)
	{
		arr[i+1]= arr[i];
		arr[posi-1]= diff;
	}
	for (i=0; i<=n; i++)
	{
		printf("%d ", arr[i]);
	}
}


void bubble_sort(int arr[], int n)
{
  long c, d, t;
 
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        t= arr[d];
        arr[d] = arr[d+1];
        arr[d+1] = t;
      }
    }
  }
}
