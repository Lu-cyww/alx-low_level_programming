#include "main.h"

/**
 * create_array - creates an array
 * @size: Size of the array
 * @c: character
 * Return: Returns value of the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		s[j] = c;

	return (s);
}
