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
	short num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}




