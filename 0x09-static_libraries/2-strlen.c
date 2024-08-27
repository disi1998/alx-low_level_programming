#include "main.h"

/**
 * _strlen - return len of string s
 * @s: string
 * Return: len of string s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
