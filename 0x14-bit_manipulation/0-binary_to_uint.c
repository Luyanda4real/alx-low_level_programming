#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if @b is NULL or contains invalid char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int lu_bri = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		lu_bri = 2 * lu_bri + (b[i] - '0');
	}

	return (lu_bri);
}
