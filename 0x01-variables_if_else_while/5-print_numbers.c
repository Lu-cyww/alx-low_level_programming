#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is my main function
 * description: prints all single digit numbers of base 10
 * Return: 0 when SUCCESS
 */

int main(void)
{
	int l;

	for (l = 0; l < 10; l++)
		printf("%d", l);

	printf("\n");

	return (0);
}
