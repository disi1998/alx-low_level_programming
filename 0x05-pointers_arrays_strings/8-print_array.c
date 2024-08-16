#include "main.h"

/**
 * print_array - print nums stored in array inorder
 * @n: number of arrays
 * @a: array
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < (n - 1);)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[n - 1]);
	}
}
