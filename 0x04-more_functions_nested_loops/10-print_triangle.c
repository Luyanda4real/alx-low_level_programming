#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of triangle
 * Retuin: void
 */

void print_triangle(int size)
{
	int row, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
