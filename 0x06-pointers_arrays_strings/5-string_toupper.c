#include "main.h"

/**
 * string_toupper - my starting function
 * @n: string
 * Return: capitalized string
 */

char *string_toupper(char *n)
{
	int j;

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 32;
	}
	return (n);
}
