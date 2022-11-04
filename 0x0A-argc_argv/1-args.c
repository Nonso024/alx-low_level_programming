#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
