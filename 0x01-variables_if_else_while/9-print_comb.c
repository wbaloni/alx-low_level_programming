#include <stdio.h>

/**
 * main - name of function
 *
 * Description: Separating single digits using commas
 *
 * Return: 0 when successful
 *
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}




