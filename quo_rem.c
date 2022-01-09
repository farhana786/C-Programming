#include<stdio.h>
void main()
{
	int num1,num2,quotient,remainder; //declaration of integer variable 'num1'
	
	printf("\nEnter first number =");
	scanf("%d",&num1); //scanf() function store the value in variable. & is an address of operator locates the address of variable 'num1'
	printf("\nEnter second number =");
	scanf("%d",&num2);
	
	quotient = num1/num2; //
	remainder = num1%num2;
	
	printf("\nQuotient is %d",quotient);
	printf("\nRemainder is %d",remainder);
}
