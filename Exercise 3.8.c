#include <stdio.h>

int main(void)
{
	//Declares variables i, j, and next_multiple.
	int i, j = 7, next_multiple;
	
	//Asks for user's input and stores it in variable "i".
	printf("How many days would you like to round up to turn into a number divisible by weeks ( to be divisible by 7)?\n");
	scanf("%i", &i);

	//Does the calculation.
	next_multiple = i + j - i % j;
	
	//Returns values to the user.
	printf("%i days rounded up to the closest number divisible by weeks is %i.\n", i, next_multiple);
	
	return 0;
}

