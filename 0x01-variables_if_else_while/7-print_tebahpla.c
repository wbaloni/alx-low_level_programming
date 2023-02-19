#include <stdio.h>

/**
 * main - starting point of my code
 *
 * Description: Printing lowercase alphabet backwards
 *
 * Return: 0 when successful
 */

int main(void)
{
	char phal;

	for (phal = 'z'; phal >= 'a'; phal--)
		putchar(phal);
	putchar('\n');
	return (0);
}
