#include<stdio.h>

void main()
{
	int row, totalRow, space, star;
	
	printf("\nEnter total number of rows:");
	scanf("%d",&totalRow);//5
	//row traversing
	for(row=1; row<=totalRow; row++)
	{
		//print the spaces
		for(space=1; space<=totalRow-row; space++)
			printf(" ");
	
		//print the stars
		for(star=1; star<=((2*row)-1); star++)
			printf("*");
			
	printf("\n");				
    }
}
