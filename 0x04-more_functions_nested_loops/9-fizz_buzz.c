#include "main.h"
#include <stdio.h>

/**
 * main - my main function
 * description: prints the numbers from 1 to 100, followed by a new line.
 * Return: 0 when success
 */

int main(void)
{
int j;

for (j = 1; j <= 100; j++)
{
	if (j % 3 == 0 && j % 5 != 0)
	{
		printf(" Fizz");
	}
	else if (j % 5 == 0 && j % 3 != 0)
	{
		printf(" Buzz");
	}
	else if (j % 3 == 0 && j % 5 == 0)
	{
		printf(" FizzBuzz");
	}
	else if (j == 1)
	{
		printf("%d", j);
	}
}
printf("\n");

return (0);
}
