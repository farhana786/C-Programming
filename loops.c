#include<stdio.h>

/*void main()
{
	int n;
	//printf("Enter any number:");
	//scanf("%d",&i);
	for(n = i; n >= 0; n--) // Entry Controlled loop
	{
		printf("\nCounter variable value");
		printf("\t%d",n);
	}
	printf("\nEnd of program!!!");	
}

void main()
{
	int i,n;
	printf("Enter any number:");
	scanf("%d",&n);
	i = n;
	while(i>=0) // Entry controlled loop
	{
	    
		printf("\nCounter variable value");
		printf("\t%d",i);
		i--;
	}
	printf("\nEnd of program!!!");	
}
*/

void main()
{
	int i,n;
	printf("Enter any number:");
	scanf("%d",&n);
	i = n;
	do
	{
		printf("\nCounter variable value");
		printf("\t%d",i);
		i--;
	}while(i>=0); //Exit controlled loop
	
	printf("\nEnd of program!!!");	
}
