#include "main.h"
/**
 * leet - encodes a string in 1337
 * @e: string to be encoded
 *
 * Return: the resulting string
 */
char *leet(char *e)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; e[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (e[i] == a[j])
			{
				e[i] = b[j];
			}
		}
	}
	return (e);
}
