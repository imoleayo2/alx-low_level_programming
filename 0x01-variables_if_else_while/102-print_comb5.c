#include <stdio.h>

/**
 * main - main entry
 * Description: print all possible combination of 2 digit numbers
 * Return: always 0 (correct)
 */

int main(void)
{
	int c;
	int i;
	int j;
	int k;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (k = 48; k <= 57; k++)
				{
					if ((j + k) > (c + i) && j >= c)
					{
						putchar(c);
						putchar(i);
						putchar(j);
						putchar(k);
						if (c + i + j + k == 227 && c == 57)
						{
							break;
						}
							else
						{
							putchar(',');
							putchar(' ');
							}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);


}
