#include <stdio.h>
int main() 
{
	int a = 20;	/* 20 = 010100 */  
    int b = 21;	/* 21 = 010101 */
   	int c = 0;           

   	c = a & b;       /* 20 = 010100 */ 
   	printf("AND - Value of c is %d\n", c );

   	c = a | b;       /* 21 = 010101 */
   	printf("OR - Value of c is %d\n", c );

   	c = a ^ b;       /* 1 = 0001 */
   	printf("Exclusive-OR - Value of c is %d\n", c );

	c = a << 2;	/* 80 = 101000 */
    printf("Left shift - Value of c is %d\n", c );

   	c = a >> 2;	/*05 = 000101 */
   	printf("Right shift - Value of c is %d\n", c );
   	
	return 0;
	
}
