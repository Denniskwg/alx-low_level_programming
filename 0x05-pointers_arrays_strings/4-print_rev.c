#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int i, j, k, count = 0;
	char rev[100];

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}

	for (k = 0; k < count; k++)
	{
		_putchar(rev[k]);
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
