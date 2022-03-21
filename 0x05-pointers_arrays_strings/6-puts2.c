#include "main.h"
#include <stdio.h>

/**
 * puts2 - this function prints every other character of a string
 * (Divisible by two)
 * @str: pointer, the string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
