#include "main.h"

/**
 * print_numbers - print nums 0 through 9
 */

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
