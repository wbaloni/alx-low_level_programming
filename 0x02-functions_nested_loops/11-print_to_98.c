#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers upto 98
 * @n: the natural number
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
}
