#include "main.h"

/**
 * times_table - function that prints 9 times table
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;

			if (j == 0)
				_putchar('0' + k);
			else if (k >= 10)
			{
				_putchar(' ');
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
