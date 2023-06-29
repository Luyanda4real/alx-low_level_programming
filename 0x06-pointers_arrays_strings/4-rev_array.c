#include "main.h"

/**
 * reserve_array - Reserves the content of an array of intergers
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
