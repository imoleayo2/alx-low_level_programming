#include "main.h"

/**
 * print_alphabet_x10 - function that print alphabet 10x
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; 1 <= 10; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}

}
