#include "main.h"

/**
 * _strdup - string duplicator
 * @str: String
 * Return: String ponter
 */

char *_strdup(char *str)
{
	int j = 1, k = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	s = (char *)malloc(j * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);
	while (k < j)
	{
		s[k] = str[k];
		k++;
	}
	s[k] = '\0';
	return (s);
}
