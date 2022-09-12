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
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 9 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
