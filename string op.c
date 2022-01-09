#include<stdio.h>
void main()
{
	char str1[20],str2[20];
	int i,temp;
	
	printf("\nEnter the string 1:");
	gets(str1); //space generated string e.g. Hello World !
	printf("\nEnter the string 2:");
	gets(str2);
	
	/*string length
	for(i=0; str[i]!='\0'; i++)
	{
		
	}
	printf("\nLength of %s is %d",str,i);
	/*String copy
	for(i=0; str[i]!='\0'; i++)
	{
		str1[i]=str[i];
	}
	str1[i]='\0';
	printf("\nCopied string is %s",str1);
	/*String reverse
	for(i=0; str1[i]!='\0'; i++)
	{
		
	}
	len=i;
	j=0;
	for(i=len-1; i>=0; i--)
	{
		str2[j]=str1[i]
		j++;
	}
	str2[j]='\0';
	printf("\nReversed string is: ",str2);

	/*String Concatenation
	for(i=0; str1[i]!='\0'; i++)
	{
		
	}
	for(j=0; str2[j]!='\0'; j++)
	{
		str1[i+j]=str2[j];
	}		
	printf("\nConcatenated string is: %s", str1);
	*/
	//String Palindrome
	for(i=0; str1[i]!='\0'; i++)
	{
		
	}
	len=i;
	j=0;
	for(i=len-1; i>=0; i--)
	{
		str2[j]=str1[i]
		j++;
	}
	str2[j]='\0';
	temp=0;
	i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			temp=1;
			break;
		}
		i++;
	}
	if(temp==0)
	{
		printf("%s is Palindrome!",str1);
	}
	else
	{
		printf("%s is not Palindrome!",str1);
	}
}
//e.g String Palindrome -  input:- MADAM
//						  output:- MADAM	

//NITIN
//RACECAR
