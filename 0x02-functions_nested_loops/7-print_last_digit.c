#include "main.h"

/**
 * print_last_digit - last digit
 * @n: in n
 * Return: n % 10
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = (n % 10) * -1;
	}
	else
		i = n % 10;
	_putchar((i % 10) + '0');
	return (i % 10);
}
