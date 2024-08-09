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
		if (c != 101 && c != 113)
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
