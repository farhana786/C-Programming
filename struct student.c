#include<stdio.h>
#include<string.h>

struct Student
{
	int roll_no;
	char name[5];
	float sem[8];
}b[10];

int main()
{
	int i,semesters,j;
	float Sum_SGP,SGPA;
	printf("\nEnter student roll number:");
	scanf("%d",&b.roll_no);
	gets(b.name);
	printf("\nEnter name:");
	gets(b.name);
	j=1;
	for(i=0; i<10; i++)
	{
		for(j=1; j<=8; j++)
		{
		printf("\nEnter semester grade point for semester %d : ",i+1);
		scanf("%f",&b[i].sem[j]);
		}
	}
	for(i=0; i<8; i++)
	{
		Sum_SGP=Sum_SGP+b.sem[i];
	}
	semesters=i;
	SGPA=Sum_SGP/(float)semesters;
	
	printf("\nStudent Details are:");
	printf("\nRoll Number is %d",b.roll_no);
	printf("\nNAme is %s",b.name);
	printf("\nSGPA is: %f",SGPA);
	
	printf("\n\nMemory size occupied by structure is %d",sizeof(b));

	return 0;
}
