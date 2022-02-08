/*(1)
#include<stdio.h>
int main()
{
	int row, column, n;
	printf("Enter limit: ");
	scanf("%d",&n);
	for(row=0; row<=n ;row++)
	{
		for(column=0; column<=row ;column++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
OUTPUT:->
Enter limit: 7
*
**
***
****
*****
******
*******
*/
/*
(2)
#include<stdio.h>
int main()
{
	int row, column, n;
	printf("Enter limit: ");
	scanf("%d",&n); //6
	for(row=n; row>=1 ;row--)
	{
		for(column=1; column<=row ;column++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

OUTPUT:->
Enter limit: 7
*******
******
*****
****
***
**
*

(3)
#include<stdio.h>
int main()
{
	int row,star,space,n;
	printf("Enter limit: ");
	scanf("%d",&n); //6
	
	for(row=1; row<=n; row++)
	{
		for(space=0; space<n-row; space++)
		{
			printf(" ");
		}
		for(star=1; star<=(2*row)-1; star++)
		{ 
		    printf("*");	
		}		
		printf("\n");
	}
	return 0;
}
/*
OUTPUT:->
     *      
    ***     
   *****    
  *******   
 *********  
*********** 
(row1)    *     =>space=4=> Total number of rows-row number=>5-1=4  star=1
(row2)   ***    =>space=3=> Total number of rows-row number=>5-2=3  star=3
(row3)  *****   =>space=2=> Total number of rows-row number=>5-3=2  star=5
(row4) *******  =>space=1=> Total number of rows-row number=>5-4=1  star=7
(row5)********* =>space=0=> Total number of rows-row number=>5-5=0  star=9
star_test_condition= 2*row number-1 => 2*1-1=1
		       		   				   2*2-1=3
		       		                   2*3-1=5 	
		                               2*4-1=7
    		                           2*5-1=9	

(4)
***********
 *********
  *******
   *****
    ***
     *
  
(5)     
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     * 
       
(6)
*
**
***
****
*****
******
*******
******
*****
****
***
**
*

(7)
*************
****** ******
*****   *****
****     ****
***       ***
**         **
*           *

(8)
*           *
**         **
***       ***
****     ****
*****   *****
****** ******
*************
*/
