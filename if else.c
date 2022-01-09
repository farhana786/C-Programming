#include<stdio.h>
void main()
{
	int marks;//m1,m2,m3,m4,m5;
	
	printf("\n Enter the marks obtained by student: ");
	scanf("%d",&marks);

	//.per = (m1+m2+m3+m4+m5)/5;
	if (marks>100)	
		printf("You have entered wrong range of marks!!!");
	else if (marks>=90 && marks<=100)
		printf("Grade obtained by student is 'AA'");
	else if(marks>=75)
		printf("Grade obtained by student is 'BB'"); 
	else if(marks>60)
		printf("Grade obtained by student is 'CC'");
	else if(marks>40)
	    printf("Grade obtained by student is 'DD'"); 
	else
	    printf("\nYou have failed!!!");
}
