#include "main.h"

/**
 * puts_half - prints half string
 * @str: string
 */

void puts_half(char *str)
{
	int i = 0, j, k;

	while (str[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	if (i % 2 == 0)
	{
		for (j = i / 2; j <= k; j++)
		{
			_putchar(str[j]);
		}
	}
	else
		for (j = (i - 1) / 2; j <= k; j++)
		{
			_putchar(str[j]);
		}
	putchar('\n');
}
