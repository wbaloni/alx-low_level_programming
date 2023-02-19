#include <stdio.h>

/**
 * main - starting of code and name of function
 *
 * Description: Printing numbers from 0 to 9
 *
 * Return: 0 when successful
 */

int main(void)
{
	unsigned char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
