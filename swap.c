#include<stdio.h>
//Function Declaration
void swap(int *,int *);//parameterised user defined function

void main()
{
	int num1,num2;
	printf("\nEnter two numbers:");
	scanf("%d%d",&num1,&num2);//10 5
	printf("\nOriginal values are %d and %d",num1,num2);
	swap(&num1,&num2);//Actual Parameters //ff1 ff5
	printf("\n\nEnd of program");
}
//Function Defination
void swap(int *n1,int *n2) //Formal Paramters //n1=*(ff1) 
{
	int temp;
	temp= *n1;
	*n1 = *n2;
	*n2 = temp;
	
	printf("\nSwapped values are %d and %d", *n1,*n2);
}

