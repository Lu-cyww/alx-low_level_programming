#include "main.h"

/**
 * reset_to_98 - is my function
 *
 * Return: 0 when success
 */

void reset_to_98(int *n)
{
	int n = 402;
	int *ptr = &n;

	_putchar("%d\n", n);
	_putchar("%d\n", *ptr);

	*ptr = 98;

	_putchar("%d\n", n);
	_putchar("%d\n", *pts);

	return (0);
}
 
