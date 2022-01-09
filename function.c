#include<stdio.h>
//Function declaration
int addition_op(int ,int); //parameterised user defined functions
void sub_op(int *,int *);
void main()
{
	int num1,num2,choice,res;
	printf("\nEnter two numbers:");
	scanf("%d%d",&num1,&num2);//10 5
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	//Function call by reference
	case 1:
		printf("\nAddition is:%d",addition_op(num1,num2)); 
	break;
	case 2:
		sub_op(&num1,&num2); ////Actual Parameters
	break;
    }
	printf("\n\nEnd of program!");
}
//Function defination
int addition_op(int n1,int n2) //Formal Parameters
{
	int add;
	add= n1 + n2;
	return add;
}
void sub_op(int *n1,int *n2)
{
	int sub;
	sub= *n1 - *n2; // * value at address opeartor
	printf("\nSubtraction is: %d", sub);
}
