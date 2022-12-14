#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: character
 * Return: 0 when success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		if (j < n)
			dest[j] = src[j];
	while (j < n)
		dest[j++] = '\0';

	return (dest);
}

