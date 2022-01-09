#include<stdio.h>
void main()
{
	int number1,number2,quotient, remainder; //interger variable declaration
	
	printf("\nEnter number1=");
	scanf("%d",&number1); // & is address of operator which locates the address of variable 'number1' and %d format specifier used to indicate its an integer value
	printf("\nEnter number2=");
	scanf("%d",&number2); // scanf() is inbuilt input function to take the values from end user
	
	quotient=number1/number2;
	remainder=number1%number2;
	
	printf("\nQuotient is= %d",quotient);
	printf("\nRemainder is= %d",remainder);
}
