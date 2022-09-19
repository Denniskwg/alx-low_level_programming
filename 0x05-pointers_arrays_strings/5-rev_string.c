#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to thr string to be reversed
 */
void rev_string(char *s)
{
	int i, j;

	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (j = 0; j < count / 2; j++)
	{
		char ch = s[j];

		s[j] = s[count - j - 1];
		s[count - j - 1] = ch;
	}
}
