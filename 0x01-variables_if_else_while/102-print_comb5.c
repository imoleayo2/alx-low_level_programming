#include <stdio.h>

/**
 * main - main entry
 * Description: print all possible combination of 2 digit numbers
 * Return: always 0 (correct)
 */

int main(void)
{
	int c = 0;
	int i;
	int j;

	int d = 0;
	int k;
	int l;

	while (c <= 98)
	{
		i = (c / 10 + '0');
		j = (c % 10 + '0');

		while (d <= 99)
		{
			k = (d / 10 + '0');
			l = (d % 10 + '0');

			if (c < d)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(k);
				putchar(l);

				if (c != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
