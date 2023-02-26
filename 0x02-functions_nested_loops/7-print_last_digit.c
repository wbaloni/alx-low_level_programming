#include "main.h"

/**
 * print_last_digit - a function for the last digit
 *
 * @n: character to be printed
 *
 * Return: last digit if successful
 */

int print_last_digit(int n)
{
	int m;

	if (n >= 0)
		m = n % 10;
	else
		m = (n % 10) * -1;
	 _putchar('0' + m);
	 return (m);
}
