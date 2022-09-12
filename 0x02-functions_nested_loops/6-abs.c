#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @c: The number to check
 *
 * Return: The absolute value of the integer
 *
 *
 */
int _abs(int c)
{

	if (c < 0)
	{
		return  ((c) * (-1));
	}
	else
	{
		return (c);
	}
}
