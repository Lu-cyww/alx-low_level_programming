#define _putchar
#define print_alphabet_x10
#include "main.h"

/**
 * print_alphabet_x10 - this is my function
 * description: prints the alphabet in lowercase
 * Return: 0 when succes
 */

void print_alphabet_x10(void)
{
	int Z, N;

	N = 0;

	while (N < 10)
	{
		for (Z = 'a'; Z <= 'z'; Z++)
		{
			_putchar(Z);
		}
		N++;
		_putchar ('\n');
	}
}
