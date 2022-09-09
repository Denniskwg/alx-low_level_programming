#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c;

	while (c < 10)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
