#include "main.h"

/**
 * print_sign - This function prints the sign of a number
 *
 * @n: character
 *
 * Return: 1 if n is greater than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return ('1');
	}
	else if (n < 0)
	{
		_putchar ('-');
		return ('-1');
	}
	else
	{
		return (0);
	}
}
