#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -This is my main function
 * Description: Writes the alphabet in lowercase
 * Return: 0 when SUCCESS
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);

	putchar ('\n');

	return (0);
}
