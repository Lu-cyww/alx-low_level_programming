#include <stdio.h>
#include "main.h"

/**
 * main - my main function
 * @argc: Counts arguments
 * @argv: Arguments
 *
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	(void) argv; 
	printf("%i\n", argc - 1);

	return (0);
}
