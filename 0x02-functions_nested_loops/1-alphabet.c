#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: null value
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
