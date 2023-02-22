#include "main.h"

void print_alphabet_x10(void)
{
	int j;
	char alph;

	for (j = 0; j <= 9; j++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
	
	
