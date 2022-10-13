#include <unistd.h>

/**
 * main - entry point
 * Return: 1
 */
int main(void)
{
	char err[] = "and that piece of art is\" - Dora Korpar, 2015-10-1
9\n";
	write(2, err, 59);

	return (1);
}
