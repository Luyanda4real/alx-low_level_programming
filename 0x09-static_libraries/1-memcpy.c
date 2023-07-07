#include "main.h"

/**
 * _memcpy - Fills memory with a constant byte
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (successs)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
