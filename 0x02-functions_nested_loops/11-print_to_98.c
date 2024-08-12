#include "main.h"

/**
 * print_to_98 - print nums
 * Return: nums to 98
 * @n: first num
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d ", n++);
		}
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d ", n--);
		}
		printf("%d\n", n);
	}
	else
		printf("%d\n", n);
}
