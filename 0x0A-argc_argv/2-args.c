#include <stdio.h>
#include "main.h"

/**
 * main - my main function
 * @argc: counts arguments
 * @argv: arguments
 *
 * Reurn: 0 when success
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
