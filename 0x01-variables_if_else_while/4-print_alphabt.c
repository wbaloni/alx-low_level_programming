#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: This prints all lowercase letters except q and e
 *
 * Return: Always 0 if code is successful
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
