#include<stdio.h>
#include<string.h>

int main()
{
	//Declare the file pointer
	FILE *fptr;
	
	//Declare character array for the single line to be read from file
	char readChar;
	
	fptr=fopen("Test.txt","r");
	
	do
	{
		readChar=fgetc(fptr);
			printf("%c",readChar);
	}while(readChar!=EOF);
	fclose(fptr);
}
