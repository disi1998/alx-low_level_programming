#include <main.h>

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		printf("%c", s[i]);
	}
	printf("\n");
	printf("%d\n", i);
}
