#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: Arrays of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
