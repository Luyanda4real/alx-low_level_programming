#include "main.h"

/**
 * swap_int - Function that swaps the values og two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: n
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
