#include<stdio.h>
//Function Declaration
void addition_op(int *,int *);//parameterised user defined function
void sub_op(int *,int *);
void main()
{
	int num1,num2,choice;
	printf("\nEnter two numbers:");
	scanf("%d%d",&num1,&num2);//10 5
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	//Function Call by address
	switch(choice)
	{
		case 1:
			addition_op(&num1,&num2);//Actual Parameters //ff1 ff5
		break;
		case 2:
			sub_op(&num1,&num2);
		break;	
	}
	printf("\n\nEnd of program");
}
//Function Defination
void addition_op(int *n1,int *n2) //Formal Paramters //n1=*(ff1) 
{
	int a;
	a= *n1 + *n2; //value at ff1 + value at ff5 //10 + 5
	printf("\nAddition is %d",a);
}
void sub_op(int *n1,int *n2) //Formal Paramters
{
	int sub;
	sub= *n1 - *n2; //value at ff1 + value at ff5 //10 - 5
	printf("\nSubtraction is %d",sub);
}
