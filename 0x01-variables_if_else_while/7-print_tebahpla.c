#include <stdio.h>

/**
 * main - main func
 * Return: 0 on success
 */

int main(void)
{
	char c;

	for (c = 122; c >= 97;)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
