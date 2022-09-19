#include <stdio.h>
#include "main.h"

/**
 * puts2 - my function
 * @str: my string
 *
 * Return: no return value
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
