#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: int n
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i <= (n - 1) / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
