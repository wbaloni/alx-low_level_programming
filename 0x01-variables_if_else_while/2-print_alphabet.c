#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code prints out the alphabet in lower case
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
