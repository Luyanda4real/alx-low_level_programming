#include "main.h"

/**
 * _abs - computes the absolute value oof an integer
 * @n: the number to absolute
 * Return: the absolute value of number, or zero
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
