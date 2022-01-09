//Write a program in C to read a single line from the file using fscanf()functions
//Open a file, Read from it, and Close the file

#include<stdio.h>
#include<string.h>

int main()
{
	//Declare the file pointer
	FILE *fptr;
	
	//Declare character array for the single line to be read from file
	char readLine[50];
	
	//Open the existing file using fopen()function in read mode using "r" attribute
	fptr=fopen("Test.txt","r");
	
	//check if the file does not exist return NULL
	if(fptr==NULL)
	{
		printf("\nError in opening the file!!!");
	}
	else
	{
		printf("\nThe file is now opened!!!");
		//Read the line from file using fgets() function
		
		fscanf(fptr,"%[^\n]",readLine);
		printf("\nSingle line from file is %s ",readLine);
		//closing the file using fclose() function
		fclose(fptr);
		printf("\nThe file is closed now!!!");
	}
	return 0;
}














/* using fscanf() function
FILE *fptr;
fptr=fopen("Test.txt","r");
fscanf(fptr,"%s",readLine);

*/






















