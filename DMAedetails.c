// EMPLOYEE DATABASE

#include<stdio.h>
#include <stdlib.h>

struct EMP;
  {
	int eno;
	char ename[50];
	float esal;
  };

void main ()
{

struct EMP *ptr;
	ptr= (struct EMP*) malloc (sizeof(struct EMP));
	
	if (ptr==NULL)
	{
		printf("\nSorry we are out of memory!");
    }
	else
	{
		printf("Enter Employee details.");
			scanf("%d \t %s \t %f \t", &ptr->eno, &ptr->ename, &ptr->esal);
			printf("\nEMPLOYEE DETAILS");
			printf("EMp number: %d ", ptr->eno);
			printf("EMp name : %s ", ptr->ename);
			printf("EMp salary: %f ", ptr->esal);
	}
}
