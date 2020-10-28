 // DIGITAL CLOCK 
#include<stdio.h>
#include<conio.h>
void main()

{
	int h, m, s ;
	double i;
	h=0; m=0; s=0;
	printf("Digital clock");
	printf("\nEnter current time: ");
	scanf("%d %d %d", &h,&m,&s);
	
	start:;
	
	for(h;h<24;h++)
	{
		for (m;m<60;m++)
		{
			for(s; s<60;s++)
			{
			
				system("cls");
				printf("\n %d: %d: %d", h, m, s);
				
				
				for (i=0;i<99999999;i++)
					i++;
					i--;
				{
				}
				
		   }
		   s=0;
		}
		m=0;
	}
	goto start;
	getch();
	
}
