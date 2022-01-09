//Write a program in C to write a single string in a file using functions like fputc, fputs, fprintf and fwrite
//Open a file, Write content in it, close the file
#include<stdio.h>
#include<string.h>

int main()
{
	//Declare the file pointer
	FILE *fptr;
	
	//Initialise the content to be written into the file
	char writeLine[50]="File Handling in C Programming!!";
	
	//open the existing file in write mode using "w" attribute
	fptr=fopen("Test2.txt","w");
	
	//check if the file does not exist return NULL
	if(fptr==NULL)
	{
		printf("\nError in opening the file!!!");
	}
	else
	{
		printf("\nThe file is now opened!!!");
		//write the contents into the file
		if(strlen(writeLine)>0)
		{
			fputs(writeLine,fptr);
		}
		//closing the file using fclose() function
		fclose(fptr);
		printf("\nThe file is closed now!!!");
	}
	
	return 0;
}
