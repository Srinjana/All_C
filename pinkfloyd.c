// PINK FLOYD ALBUM DETAILS
#include<stdio.h>
#include<string.h>

struct ALBUM
{
	char title[50];
	char track_no[5];
	char year[5];
}

 main ()
{
	struct ALBUM alb[3];
	int i,j;
	
	for (i=0;i<=3; i++)
	{ 
		printf ("Enter title of Album ");
		gets (alb[i].title);
		printf ("Enter number of songs: ");
		gets (alb[i].track_no);
		printf("Enter year of relaese ");
		gets (alb[i].year);
	}
	
	printf ("\nTHE PINK FLOYD ALBUMS ARE AS FOLLOWS");
	
	for (i=0;i<=3;i++)
	{
		printf ("The title of the Album: ");
		puts (alb[i].title);
		printf ("Number of tracks : ");
		puts (alb[i].track_no);
		printf("the year of relaese: ");
		puts (alb[i].year);
		printf ("\n*********************\n");
	}
}
