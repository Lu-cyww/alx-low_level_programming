#include "main.h"

/**
 * print_numbers - prints digits 0 through 9
 *
 * Return: no return value
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
