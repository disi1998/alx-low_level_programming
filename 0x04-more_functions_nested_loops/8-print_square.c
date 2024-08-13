#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 */

void print_square(int size)
{
	int i, j;
	
	if (size > 0)
	{
		for (i = 0; i < size;)
		{
			for (j = 0; j < size;)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
