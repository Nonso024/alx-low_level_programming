#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: an input integer
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	char u;
	int uppercase = 0;

	for (u = 'A'; u <= 'Z'; u++)
	{
		if (u == c)
			uppercase = 1;
	}
	return (uppercase);
}
