#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is my main function
 * description: prints the alphabet in reverse
 * Return: 0 always SUCCESS
 */

int main(void)
{
	char N;

	for (N = 'z'; N >= 'a'; N--)
		putchar(N);

	putchar('\n');

	return (0);
}
