#include <stdio.h>

/**
 * main - the name of the function
 *
 * Description: Printing numbers of base 16 in lowercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	char num;
	char alph;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
