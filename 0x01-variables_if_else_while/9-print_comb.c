#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int xyz;

	for (xyz = 0; xyz < 10; xyz++)
	{
		putchar(xyz + '0');
		if (xyz < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
