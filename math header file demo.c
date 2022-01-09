#include<stdio.h>
#include<math.h> // math.h header file contains various methods for performing mathematical functions such as sqrt(), pow() etc.
int main()
{
	//body of main()
	double ceil_temp, floor_temp, sqrt_temp, pow_temp, abs_temp;
	int base,expo;
	float neg,number;
	
	ceil_temp = ceil(34.15);
	printf("\nRound up value of 34.15 is %f",ceil_temp);
	
	floor_temp = floor(3.1);
	printf("\nRound up value of 3.1 is %f",floor_temp);
	
	sqrt_temp = sqrt(16);
	printf("\nSquare root of 16 is %f",sqrt_temp);
	
	printf("\nEnter any decimal point number =");
	scanf("%f",&number);
	ceil_temp = ceil(number);
	printf("\nRound up value of %f is %f",number,ceil_temp);
	
	printf("\nEnter base number and exponent number =");
	scanf("%d%d",&base,&expo);
	pow_temp = pow(base,expo);
	printf("\n%lf",pow_temp);
	
	printf("\nEnter negative number=");
	scanf("%f",&neg);
	abs_temp = abs(neg);
	printf("\nAbsolute value of %f is %d",neg,abs_temp);
	
	
	return 0;
}

/*
double ceil(number)
{
//body of ceil()
float number;
number = round up the value 
  return 0.000000;
}
*/
