#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: Always 0
 */
int main(void)
{
	long x, n;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			n = number / x;
		}
	}
	printf("%ld\n", n);
	return (0);
}
