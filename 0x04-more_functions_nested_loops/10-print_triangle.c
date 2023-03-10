#include "main.h"

/**
 * print_triangle - prints triangles on terminal
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k, columns;

	columns = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < columns; j++)
			{
				_putchar(' ');
			}
			columns--;
			for (k = 0; k < (i + 1); k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
