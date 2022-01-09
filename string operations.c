#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50];
	char *sub;
	
	printf("\nEnter String 1:"); //Hello world.... C Programming!!!
	gets(str1);
	/*printf("\nEnter String 2:");
	gets(str2);
	printf("\nEntered String 1: %s",str1);*/
	printf("\nEntered String 1: %s",str1);
	//substring
	sub=strstr(str1,"World"); //world.... C Programming!!!
	printf("\nSubstring is: %s",sub);
    /*strcpy(str1,str2);
	printf("\nAfter performing strcpy()\n String 1: %s",str1);
	printf("\nString 2: %s",str2);
	*/
	/*strcat(str1,str2);
	printf("\nAfter performing strcat(): %s",str1);
	*/
	/*
	if(strcmp(str1,str2)==0)
		printf("\n%s and %s are same",str1,str2);
	else
		printf("\n%s and %s are not same",str1,str2);
	*/
	/*strrev(str1);
	printf("\nAfter performing strrev(): %s",str1);
	*/
	
}
