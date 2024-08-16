#include "main.h"

/**
 * rev_string - reverse str
 * @s: str
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = 0;
	while (j >= 0 && k < j)
	{
		c = s[j];
		s[j] = s[k];
		s[k] = c;
		j--, k++;
	}
}
