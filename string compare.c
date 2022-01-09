#include<stdio.h>
void main()
{
	char str1[20],str2[20];
	int i,temp;
	
	printf("\nEnter string1:");
	gets(str1);
	printf("\nEnter string2:");
	gets(str2);
	temp=0; //strings are simillar
	for(i=0; str1[i]!='\0'&& str2[i]!='\0'; i++)
	{
		if(str1[i]!=str2[i])
		{
			temp=1;
			break;
		}
	}
	if(temp==0)
	{
		printf("\n%s and %s are simillar",str1,str2);
	}
	else
	{
		printf("\n%s and %s are different",str1,str2);
	}
}


