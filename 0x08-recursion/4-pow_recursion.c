#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: number to multiply by itself
 * @y: number of times to multiply x by itself
 * Return: the value of x to power y if y is greater than 0
 * -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, (y - 1)));
}
