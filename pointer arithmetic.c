void ptr_inc(int *, int);
void ptr_dec(int *, int);
void ptr_comparison(int *, int *, int);
int main()
{
	int num[20],i,n,choice;
	printf("\nEnter your choice:\n1.Pointer Increment \n2.Pointer Decrement \n3. Pointer comparion");
	scanf("%d",&choice);
	printf("\nEnter size array:");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	switch(choice)
	{
		case 1:
			//function call
			ptr_inc(num,n);
		break;
		case 2:
			//function call
			ptr_dec(num,n);
		break;
		case 3:
			//function call
			ptr_comparison(num,&num[n-1],n);
	}	
	printf("\nEnd of program!!!");
}
void ptr_inc(int *ptr,int size)
{
	int i;
	
	for(i=0 ; i<=size-1; i++)
	{
		printf("\nAddress of num[%d] = %x",i,ptr);
		printf("\nValue of num[%d] = %c",i,*ptr);
		
		//move to the next memory address
		ptr++;
	}
}
void ptr_dec(int *ptr,int size)
{
	int i;
	
	for(i=size-1 ; i>=0; i--)
	{
		printf("\nAddress of num[%d] = %x",i,ptr);
		printf("\nValue of num[%d] = %c",i,*ptr);
		
		//move to the previous memory address
		ptr--;
	}
}

void ptr_comparison(int *ptr,int *arr,int size)
{
	int i;
	
	for(i=0; ptr<=arr; i++)// i<=size-1
	{
		printf("\nAddress of num[%d] = %x",i,ptr);
		printf("\nValue of num[%d] = %d",i,*ptr);
		
		//move to the next memory address
		ptr++;
	}
}


/*A pointer in c is an address, which is a numeric value. Therefore, you can perform arithmetic operations on a pointer just as you can on a numeric value. There are four arithmetic operators that can be used on pointers: ++, --, +, and -

To understand pointer arithmetic, let us consider that ptr is an integer pointer which points to the address 1000. Assuming 32-bit integers, let us perform the following arithmetic operation on the pointer -

ptr++
After the above operation, the ptr will point to the location 1004 because each time ptr is incremented, it will point to the next integer location which is 4 bytes next to the current location. This operation will move the pointer to the next memory location without impacting the actual value at the memory location. If ptr points to a character whose address is 1000, then the above operation will point to the location 1001 because the next character will be available at 1001.

Incrementing a Pointer
We prefer using a pointer in our program instead of an array because the variable pointer can be incremented, unlike the array name which cannot be incremented because it is a constant pointer. The following program increments the variable pointer to access each succeeding element of the array -
/*Pointer Increment
void ptr_inc();
int main()
{
	char n[]={'A','B','C'};
	char *ptr,i;
	ptr=n; // store the 0th index element address in ptr
	
	for(i=0 ; i<=2; i++)
	{
		printf("\nAddress of num[%d] = %x",i,ptr);
		printf("\nValue of num[%d] = %c",i,*ptr);
		
		//move to the next memory address
		ptr++;
	}
	return 0;
}
*/
/*Decrementing a Pointer
The same considerations apply to decrementing a pointer, which decreases its value by the number of bytes of its data type as shown below -Pointer Decrement
int main()
{
	char n[]={'A','B','C'};
	char *ptr,i;
	ptr=&n[2]; // store the 2nd index element address in ptr
	
	for(i=2 ; i>=0; i--)
	{
		printf("\nAddress of num[%d] = %x",i,ptr);
		printf("\nValue of num[%d] = %c",i,*ptr);
		
		//move to the previous memory address
		ptr--;
	}
	return 0;
}

/*Pointer Comparisons
Pointers may be compared by using relational operators, such as ==, <, and >. If p1 and p2 point to variables that are related to each other, such as elements of the same array, then p1 and p2 can be meaningfully compared.

The following program modifies the previous example - one by incrementing the variable pointer so long as the address to which it points is either less than or equal to the address of the last element of the array, which is &var[MAX - 1] -
//Pointer Comparion 
int main()
{
	char n[]={'A','B','C'};
	char *ptr,i;
	ptr=n; // store the 0th index element address in ptr
	
	for(i=0; ptr<= &n[2]; i++)
	{
		printf("\nAddress of num[%d] = %x",i,ptr);
		printf("\nValue of num[%d] = %c",i,*ptr);
		
		//move to the next memory address
		ptr++;
	}
	return 0;
}
*/
