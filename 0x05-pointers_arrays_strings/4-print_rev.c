#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer of string to reverse
 */
void print_rev(char *s)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (j = count - 1; s[j] != '\0'; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
