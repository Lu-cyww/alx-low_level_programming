#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -this is my function
 * Description: determines the value of the last digit
 * Return: 0 if success
 */

int main(void)
{
	int n;

	int (1) = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	while (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	while (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	while (n < 6 && n != 0)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
