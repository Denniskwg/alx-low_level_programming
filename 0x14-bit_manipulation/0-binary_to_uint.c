#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	const char *ptr;
	int l, j;

	if (b == NULL)
		return (0);
	l = 0;
	while (b[l] != '\0')
		l++;
	l--;
	for (ptr = b, sum = 0; *ptr != '\0' && l >= 0; ptr++, l--)
	{
		if (*ptr == '1' || *ptr == '0')
		{
			if (*ptr == '1')
			{
				j = power(2, l);
				sum += j;
			}
			if (*ptr == '0')
				sum += 0;
		}
		else
			return (0);
	}
	return (sum);
}

/**
 * power - returns the power of a number
 * @k: base number
 * @j: power
 * Return: power of a number
 */
int power(int k, int j)
{
	if (j == 0)
		return (1);
	else
		return (k * power(k, j - 1));
}
