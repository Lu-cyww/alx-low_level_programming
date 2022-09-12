#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - this is my main function
 * description: prints all the numbers of base 16 in lowercase
 * Return: 0 always SUCCESS
 */

int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
