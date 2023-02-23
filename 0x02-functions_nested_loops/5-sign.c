#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @n: character to be checked
 *
 * Return: 1 for positive numbers
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (+1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
return (0);
}
