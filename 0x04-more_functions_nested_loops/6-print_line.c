#include "main.h"
#define _putchar

/**
 * print_line - my function
 * @n - the numbers of times a char is printed
 * Return: void
 */

void print_line(int n)
{
	int n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

