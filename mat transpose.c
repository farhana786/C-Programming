#include<stdio.h>
int main()
{
	int matrix1[10][10],matrix2[10][10],row,col,rSize,cSize,transpose[10][10];
	
	printf("\nEnter rowsize and columsize of matrices:");
	scanf("%d%d",&rSize,&cSize); // 3 3
	
	//Input element of matrices
	printf("\nEnter the elements of matrix1:\t");
	for(row=0; row<rSize; row++)
	{
		for(col=0; col<cSize; col++)
		{
			scanf("%d",&matrix1[row][col]);
		}
	}
	printf("\nEnter the elements of matrix2:\t");
	for(row=0; row<rSize; row++)
	{
		for(col=0; col<cSize; col++)
		{
			scanf("%d",&matrix2[row][col]);
		}
	}
	
	//Displaying the element of matrices
	printf("\nElements of matrix1:\n");
	for(row=0; row<rSize; row++)
	{
		for(col=0; col<cSize; col++)
		{
			printf("%d\t",matrix1[row][col]);
		}
		printf("\n");
	}
	printf("\nElements of matrix2:\n");
	for(row=0; row<rSize; row++)
	{
		for(col=0; col<cSize; col++)
		{
			printf("%d\t",matrix2[row][col]);
		}
		printf("\n");
	}
	
	//Performing transpose operation on matrix1
	
	printf("\nTranspose of matrices:\n");
	for(row=0; row<rSize; row++)
	{
		for(col=0; col<cSize; col++)
		{
			printf("Addition of %d and %d is %d\t",matrix1[row][col],matrix2[row][col],matrix1[row][col]+matrix2[row][col]);
		}
		printf("\n");
	}
	return;
}
