#include "main.h"

/**
 * leet - encode str into 1337
 * @str: string
 * Return: pointer
 */

char *leet(char *str)
{
	int a, b;
	char *alpha = "aeotlAEOTL";
	char *integer = "4307143071";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; alpha[b] != '\0'; b++)
		{
			if (str[a] == alpha[b])
				str[a] = integer[b];
		}
	}
	return (str);
}
