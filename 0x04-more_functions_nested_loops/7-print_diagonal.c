#include "main.h"

/**
 * print_diagonal - print dignol
 * @n: n
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = n; i <= n; i--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
