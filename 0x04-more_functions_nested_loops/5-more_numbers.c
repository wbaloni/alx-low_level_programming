#include "main.h"

/**
 * more_numbers - prints ten times the numbers 0 to 14
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
