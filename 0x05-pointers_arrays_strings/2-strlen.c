#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string
 * @str: the stringto get the return of
 * Return: the length of @str
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);

}
