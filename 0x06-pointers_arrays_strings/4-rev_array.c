#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: content
 * @n: elemets of the content
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int j, k;

	for (j = 0; j < n; j++)
	{
		n--;
		k = a[j];
		a[j] = a[n];
		a[n] = k;
	}
}

