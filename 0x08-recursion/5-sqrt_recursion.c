#include "main.h"

/**
 * sqr - check sqr
 * @i: int
 * @j: int
 * Return: sqr
 */

int sqr(int i, int j);

/**
 * _sqrt_recursion - square recursion
 * @n: int
 * Return: square
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqr(1, n));
}

/**
 * sqr - sqr
 * @i: int
 * @j: int
 * Return: sqr
 */

int sqr(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqr(i + 1, j));
}
