#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the squareroot
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	return (func2(n, 1));
}

/**
 * func2 - finds the square root of a number recursively
 * @n: bumber to find the square root
 * @i: starting point
 * Return: natural square root of n, if n doesn't have a natural
 * squareroot -1
 */
int func2(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i > n)
		return (-1);
	else
		return (func2(n, i + 1));
}
