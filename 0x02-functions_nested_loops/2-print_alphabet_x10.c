#include "main.h"
/**
 * print_alphabet_x10 - prints letters of the alphabet 10 times
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int a = 0;

	do {
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
			_putchar('\n');
		a++;
	} while (a < 10);
}
