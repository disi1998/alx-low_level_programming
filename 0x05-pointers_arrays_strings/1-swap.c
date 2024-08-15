#include "main.h"

/**
 * swap_int - swap two ints
 * @a: int 1
 * @b: int 2
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
