#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: Nothing
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 10; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			if (column == 0)
			{
				_putchar(column + '0');
			}
			if (product < 10 && column != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
