#include "main.h"

/**
 * factorial - factorial func
 * @n: factorial num
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
