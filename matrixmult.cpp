//MULTIPLY TWO MATRICES
#include<stdio.h>

int main ()
{
	int a[10][10], b[10][10], product[10][10];
	int arows, brows, bcols, acols;
	int i,j,k;
	int sum=0;
	
	//PART 1
	
	printf("Rows and columns of first matrix: ");
	scanf ("%d %d", &arows, &acols);
	printf ("Enter elements: ");
	
	for (i=0; i<arows; i++);
	{
		for (j=0; j<acols; j++)
		{
			scanf("%d", &a[i] [j]);
		}
	}
	printf ("%d", &a[i][j]);
	
	printf("Enter rows and columns of second matrix: ");
	scanf ("%d %d", &brows, &bcols );
	if (brows!= acols)
	{
		printf ("\n THIS MULTIPLICATION IS NOT FEASABLE");
	}
	else
	{
		printf ("Enter elements: ");
		
		for (i=0; i<brows; i++)
		{
			for (j=0; j<bcols; j++)
			{
				scanf ("%d", &b[i] [j]);
			}
		}
	}
	printf("\n");
	
	//PART 2
	
	for (i=0; i<arows; i++)
	{
		for (j=0; j<brows; j++)
		{
			for (k=0; k<brows; k++)
			{
				sum+= a[i] [k]*b[k] [j];         // multiplying the elements in 2 matrices
			}
			product[i] [j]=sum;                 // adding corresponding terms to obtain final matrix product
			  
		}
	}
	
	// PRINTING RESULT
	
	for (i=0; i<arows; i++)
	{
		for(j=0; j<brows; j++)
		{
			printf ("%d", product[i][j]);
		}
		
		printf("\n");
	}
	return 0;
}
