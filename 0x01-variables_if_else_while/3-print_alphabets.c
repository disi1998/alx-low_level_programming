#include <stdio.h>

/**
 * main - main func
 * putchar - print char
 * Return: 0 on success
 */

int main(void)
{
	char c;

	for (c = 97; c < 123;)
	{
		putchar(c);
		c++;
	}
	for (c = 65; c <= 90;)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
