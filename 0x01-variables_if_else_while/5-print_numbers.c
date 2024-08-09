#include <stdio.h>

/**
 * main - main
 * putchar - print int
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9;)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
