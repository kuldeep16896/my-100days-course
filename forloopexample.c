#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, j, k=1;
	for(i=0; i<5; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("* ");
		}
		k=k+2;
		printf("\n");
	}
	
}
