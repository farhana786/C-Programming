int fibonacci(int);
void main()
{
	int n,i;
	printf("\nEnter number of places:");
	scanf("%d",&n);
	printf("\nFibonacci Series is:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",fibonacci(i));
	}   
}
int fibonacci(int num)
{
	if(num==0)
		return 0;
	if(num==1)
		return 1;
	return fibonacci(num-1)+fibonacci(num-2);
}
