#include "main.h"
/**
 * _atoi - converts a string to an integer
 * The number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * @s: pointer to string to convert to an integer
 * Return: the integer value of the digits in s
 * or 0 if no digits were found in s.
 */
int _atoi(char *s)
{
	int i, k, l, flag;
	int j = 0;
	int result = 0;
	char *pt = string(s);

	if (pt == 0)
		return (0);
	flag = typeflag(s);
	while (pt[j] >= 48 && pt[j] <= 57)
	{
		j++;
	}
	j -= 1;
	for (k = 0, l = j; k <= j; k++, l--)
	{
		i = power(l);
		result += ((pt[k] - '0') * i);
	}
	if (flag < 0)
		return (result * -1);
	return (result);
}
/**
 * power - returns the power of a number in base 10
 * @n: number of times to multiply by 10
 * Return: 10 power of n
 */
int power(int n)
{
	int i = 1;

	while (n != 0)
	{
		i *= 10;
		--n;
	}
	return (i);
}
/**
 * typeflag - returns the number of times a - or + was found in
 * a string
 * @s: the string to loop over to find the occurence of - or + before a digit
 * Return: 0 or >0 if + was found more than - or <0 if - was found more than +
 */
int typeflag(char *s)
{
	int i;
	int flag = 0;

	i = 0;
	while (s[i] != '\0' && !(s[i] >= 48))
	{
		if (s[i] == 45)
			flag--;
		if (s[i] == 43)
			flag++;
		i++;
	}
	return (flag);
}
/**
 * string - returns a pointer to a substring from s after first digit is found
 * @s: string to search for a digit
 * Return: pointer to first digit in s or a null pointer if no digit was found
 */
char *string(char *s)
{
	int i;
	char *j = s;
	char *p = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			p = &j[i];
			break;
		}
		i++;
	}
	return (p);
}
