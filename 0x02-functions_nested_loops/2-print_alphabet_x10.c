#include "main.h"

/**
 * print_alphabet_x10 - my function
 * description: prints ten times the alphabet
 * Return: 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int c = 0;
	char l;

	while (c++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
