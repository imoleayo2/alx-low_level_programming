#include "main.h"

/**
 * print_sign - main function
 *
 * @n: function parameter
 *
 * Return: 1 for positive number
 * and -1  for negative number and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
