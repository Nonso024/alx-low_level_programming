#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: integer to be checked
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	char b;
	int dig = 0;

	for (b = '0'; b <= '9'; b++)
	{
		if (b == c)
			dig = 1;
	}
	return (dig);
}
