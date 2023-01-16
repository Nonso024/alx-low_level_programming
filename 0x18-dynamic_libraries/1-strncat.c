#include "main.h"
/**
 * *_strncat - a function that concatenates two strings
 * @dest: the string to append to
 * @src: the string to add
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
