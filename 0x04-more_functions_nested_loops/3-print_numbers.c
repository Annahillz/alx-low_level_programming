#include "main.h"

/**
 * print_numbers - This function prints the numbers 0-9
 * followed by a new line
 *
 * Return: 0 for success
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
		_putchar('/n');

}
