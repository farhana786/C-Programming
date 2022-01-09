#include<stdio.h>
struct Student
{
	int roll_no;
	char name[50];
	char div[2];
	char batch[5];
}b[10]; //array of structure

int main()
{
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("\nEnter details of student %d:",i+1);
		printf("Enter roll number:");
		scanf("%d",&b[i].roll_no);
		gets(b[i].name);
		printf("Enter name:");
		get(b[i].name);
		printf("Enter division:");
		scanf("%s",&b[i].div);
		printf("Enter batch:");
		scanf("%s",&b[i].batch);
	}
	for(i=0; i<10; i++)
	{
		printf("\nRecords of STUDENT %d:",i+1);
		printf("Roll number is:");
		printf("%d",b[i].roll_no);
		printf("Name is:");
		printf("%s",b[i].name);
		printf("Division is:");
		printf("%s",b[i].div);
		printf("Batch is:");
		printf("%s",b[i].batch);
	}
	return 0;
}
