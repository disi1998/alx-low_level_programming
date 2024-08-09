#include <stdio.h>

/**
 * main - main func
 * putchar - print char
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 97; c < 123;)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
