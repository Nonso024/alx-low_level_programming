#include "main.h"
/**
 * print_chessboard - function that prints a chessboard
 * @a: 2d array of characters
 */
void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;
	while (y < 8)
	{
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
