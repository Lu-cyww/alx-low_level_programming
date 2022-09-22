#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: The character to be checked
 *
 * Return: 1 if success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
