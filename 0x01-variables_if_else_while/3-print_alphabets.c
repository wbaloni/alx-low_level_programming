#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This prints the alphabets in lowercase then in uppercase
 *
 * Return: Always 0 if successful
 */

int main(void)
{
	char al;
	char AL;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	for (AL = 'A'; AL <= 'Z'; AL++)
		putchar(AL);
	putchar('\n');
	return (0);
}
