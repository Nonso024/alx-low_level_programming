#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: Buffer array
 * @b: constant byte
 * @n: number of bytes of memeory area to fill
 * Description: fills the first n bytes of the memory area pointed to by s
 * wit  the constant byte b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
