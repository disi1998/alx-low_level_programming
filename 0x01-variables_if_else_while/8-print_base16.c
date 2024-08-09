#include <stdio.h>

/**
 * main - main func
 * Return: 0 on success
 */

int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9';)
	{
		putchar(i);
		i++;
	}
	for (c = 97; c <= 102;)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
