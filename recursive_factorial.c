int factorial(int);
int main()
{
    int fact,num;
    printf("\nEnter any number to find factorial:");
    scanf("%d",&num);
    fact=factorial(num);
    printf("\nFactorial of %d is %d",num,fact);
    return 0;
}
int factorial(int n)
{
    if(n<=1)
	return 1;
    else
    	return (n*factorial(n-1));
        /*        5*factorial(4) 
		4*factorial(3)
		3*factorial(2)
		2*factorial(1)*/
}




