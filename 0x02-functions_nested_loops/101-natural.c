/*
 * File: 101-natural.c
 * Auth: Luyanda Sithole
 */

#include <stdio.h>

/**
 * main - list all natural numbers below 1024,
 * that are multiples of 3 and 5
 * with 1024 excluded.
 *
 * Return: Always 0
 */

int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		((x % 3) == 0 || (x % 5) == 0);
			sum += x;
	}

	printf("%d\n", sum);

	return (0);
}
