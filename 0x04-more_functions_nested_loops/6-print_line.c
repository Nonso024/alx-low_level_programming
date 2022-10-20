#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of times the chracter _ should be printed
 * Return: Always 0
 */
void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
