// Converts Fahrenheit (F) to Celsius (C) using C = (F - 32) / 1.8

#include <stdio.h>

int main(void)
{
	float Farhenheit = 27;
	float Celsius = (Farhenheit - 32) / 1.8;
	
	printf("%g degrees in Fahrenheit is the same as %g degrees in Celsius.\n", Farhenheit, Celsius);

	return 0;
}

