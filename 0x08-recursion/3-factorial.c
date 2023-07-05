#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial of
 * Return: The factorial of a given number, or -1 if there is an error
 */
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
