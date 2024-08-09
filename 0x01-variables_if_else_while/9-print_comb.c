#include <stdio.h>

/**
 * main - main func
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9';)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
