#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is my main function
 * description: Writes the alphabet in lowercase and then uppercase
 *
 * Return: 0 always SUCCESS
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);


	putchar ('\n');

	return (0);
}
