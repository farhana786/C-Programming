#include<stdio.h>
void main()
{
	int a[20],min,max,i,n;
	
	printf("\nHow many elements:");
	scanf("%d",&n);
	
	printf("\nEnter array elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
    }
		
	max=a[0]; //0th index element will get stored in max variable
	min=a[0]; //0th index element will get stored in min variable
	
	for(i=1; i<n; i++)
	{
		//comparision
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nMaximum element of array is %d",max);
	printf("\nMinimum element of array is %d",min);
}
