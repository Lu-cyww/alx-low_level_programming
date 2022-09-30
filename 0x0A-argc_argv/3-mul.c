#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main  - my main function
 * @argc: counts argumrnt
 * @argv: argument
 *
 * Return: o when success, 1 when fail
 */

int main(int argc, char *argv[])
{
	int j, k;
	if (argc == 3)
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);
		printf("%d\n", j *k);
		return (0);
	}
	printf("Error\n");
	return (1);
}
