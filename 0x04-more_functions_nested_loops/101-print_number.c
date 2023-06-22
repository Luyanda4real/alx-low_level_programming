#include "main.h"

/**
 * print_number - Prints an integer
 * @n: input iteger parameter
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		 _putchar('-');
	}
	i /= 10;

	if (i != 0)
		print_number(1);
	_putchar((unsigned int) n % 10 + '0');
}
