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
	char letter, LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar (letter);
		putchar (LETTER);

		putchar ('/n');

	return (0);
}
