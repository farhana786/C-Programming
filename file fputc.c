//Open a file, Write content in it, close the file
#include<stdio.h>
#include<string.h>

int main()
{
	//Declare the file pointer
	FILE *fptr;
	int i;
	//Initialise the content to be written into the file
	char writeLine[50]="File Handling in C Programming!!!!!";
	
	//open the existing file in write mode using "w" attribute
	fptr=fopen("Test.txt","w");
	
	for(i=0; writeLine[i]!='\0'; i++)
	{
		//single character at a time. Input string into the file
		fputc(writeLine[i],fptr);
	}
	fclose(fptr);
	printf("\nThe file is closed now!!!");
	
	return 0;
}
