#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b =tmp;
}

