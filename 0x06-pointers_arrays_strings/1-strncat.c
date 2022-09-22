#include "main.h"

/**
 * _strncat - my starting function
 * @dest: copy to
 * @src: copy from
 * @n: character
 * Return: 0 always success
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (k = 0; k < n; k++)
	{
		dest[j + k] = src[k];
		if (src[k] == '\0')
			k = n;
	}
	return (dest);
}
