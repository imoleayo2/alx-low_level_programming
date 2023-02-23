#include "main.h"

/**
 * _abs - main function
 *
 * @d: parameter function
 *
 * Return: a for success
 */

int _abs(int d)
{
	if (d < 0)
		d = -(d);
	else if (d >= 0)
		d = d;
	return (d);

}
