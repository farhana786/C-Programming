//Addition of two numbers
#include<stdio.h>
void main()
{
	int num1,num2,sum; //declaration of integer variable 'num1'
	printf("Enter two numbers =");
	scanf("%d%d",&num1,&num2); //& is an address of operator which locates the address of variable 'num1' and scanf() is a inbuilt input function which stores the value in variable
	sum = num1 + num2; // '=' assignment operator
	printf("Addition is %d",sum); // %d is format specifier which represent integer values. 
	                        //semicolon is termination operator which stops the eecution os instruction.
}
