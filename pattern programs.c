/*(1)
#include<stdio.h>
int main()
{
	int row,column,n;
	printf("Program to display star pattern\n\n");
	printf("Enter limit:");
	scanf("%d",&n);
	for(row=0; row<n; row++)
	{
		for(column=0; column<=row; column++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

* ->0th row
** ->1st row
*** ->2nd row
**** ->3rd row
***** -> 4th row
****** ->5th row

(2)
#include<stdio.h>
int main()
{
	int row,column,n;
	printf("Program to display star pattern\n\n");
	printf("Enter limit:");
	scanf("%d",&n); //6
	for(row=n; row>=1 ; row--)
	{
		for(column=0; column<row; column++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

OUTPUT :-
Program to display star pattern
Enter limit:7
*******
******
*****
****
***
**
*
*/
//(3)
#include<stdio.h>
int main()
{
	int row,star,n,space;
	printf("Program to display star pattern\n\n");
	printf("Enter limit:");
	scanf("%d",&n); //6
	for(row=1; row<=n ; row++)
	{
		for(space=1; space<=n-row; space++)
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
     *      
    ***     
   *****    
  *******   
 *********  
*********** 
(1)    *     =>space=4=> Total number of rows-row number=>5-1=4  
(2)   ***    =>space=3=> Total number of rows-row number=>5-2=3
(3)  *****   =>space=2=> Total number of rows-row number=>5-3=2
(4) *******  =>space=1=> Total number of rows-row number=>5-4=1
(5)********* =>space=0=> Total number of rows-row number=>5-5=0

star=2*row number-1 => 2*1-1=1
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

*/
