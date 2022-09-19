#include "main.h"

/**
 * _strlen - determines the length of a string
 * @s: the string
 * Return: thelenth of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) l = '\0')
		len++;

	return (len);
}
