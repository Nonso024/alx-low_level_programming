#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'q' && low != 'e')
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');
	return (0);
}
