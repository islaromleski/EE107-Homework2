//This program calculates (3.31 * 10^-8 * 2.01 * 10^-7) / (7.16 * 10^-6 + 2.01 * 10^-8).

#include <stdio.h>

int main(void)
{
	//Declare variables.
	float answer;
	
	//Do calculations.
	answer = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);
	
	//Print the answer.
	printf("(3.31 * 10^-8 * 2.01 * 10^-7) / (7.16 * 10^-6 + 2.01 * 10^-8) equals %g", answer);
	
	return 0;
}