#include "main.h"

/**
 * print_line - my function
 * @n: The numbers of times a char is printed
 *
 * Return: void
 */

void print_line(int n)
{

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
