#include <stdio.h>
#include "main.h"

/**
 * main - main func
 * Return: 0 on success
 */

int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	for (; i <= 9;)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
