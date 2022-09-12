#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is my main function
 * description: prints all possible combinations of single-digit numbers
 * Return: 0 when SUCCESS
 */

int main(void)
{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
		putchar(num1);
			putchar(',');
			putchar(' ');

	return (0);
}
