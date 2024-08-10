#include "main.h"

/**
 * print_sign - print sign of n
 * @n: number of type int
 * Return: 1 if positive, 0 if zero -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
