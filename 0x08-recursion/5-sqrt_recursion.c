#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int number
 * Return: -1 if no natural square root, else return natural
 * spuare root
 */

int _sqrt_recursion(int n)
{
	int _sqrt(int n, int sq);
	int sq = 1;

	return (_sqrt(n, sq));
}

/**
 * _sqrt - helper function to solve initial function
 * @sq: number to determine sqrt of
 * @n: integer number
 * Return: square root if natural square root, or -1 if none found
 */

int _sqrt(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (_sqrt(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
