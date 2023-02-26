#include "main.h"

/**
 * _abs - name of function
 *
 * @n: character that is printed
 *
 * Return: absolute value of a number
 */

int _abs(int n)
{

	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
