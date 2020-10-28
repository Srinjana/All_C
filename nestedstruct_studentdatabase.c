// STUDENT DATABASE SHIZZ
#include<stdio.h>
#include<string.h>

struct marks
{
	int m1[4];
	int m2[4];
	int m3[4];
};
struct student
{
	char name[50];
	int Roll[6];
	struct marks mrk;
};

int main()
{ 
  struct student std[2];
  int i;
  
  for (i=0; i<=2; i++)
  { 
     
  printf ("\n Enter Name: ");
  gets (std[i].name);
  printf (" \n ENTER ROLL: ");
  gets(std[i].Roll);
  printf("\n Enter best 3 marks : ");
  gets (std[i].mrk.m1 ,std[i].mrk.m2,std[i].mrk.m3);
    
  } 
  
printf ("\n *****STUDENT DETAILS******");

for (i=0; i<=2; i++)
{
	printf ("\n STUDENT NAME: ");
	puts (std[i].name);
	printf("\n ROLL NO: ");
	puts (std[i].Roll);
	printf ("\n BEST SCORES: ");
	puts (std[i].mrk.m1);
	puts (std[i].mrk.m2);
	puts(std[i].mrk.m3);
}
return 0;
}
