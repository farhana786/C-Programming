#include<stdio.h>
void main()
{
int i,j,start,end,temp;

printf("\nEnter the range:start:");
scanf("%d",&start);
printf("\nEnter the range:end:");
scanf("%d",&end);

if(start==1)
   start++;
for(i=start; i<=end; i++)
{
   //temp variable is set to 1 to tell if i is prime or not
   temp=1;
   for(j=2; j<i; j++)
   {
      if(i%j==0)
      { 
	 	temp=0;
        break;   
      }
    }
    //temp=1 means i is prime number
    //temp=0 means i is not prime number
    if(temp==1)
         printf("%d\t",i);
}	 
}
