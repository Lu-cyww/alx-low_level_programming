#define print_alphabet_x10
#define _putchar
#include "main.h"

/**
 * main - this is my main function
 * description: prints the alphabet in lowercase
 * Return: o always success
 */

void print_alphabet_x10(void);

int main(void)
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
