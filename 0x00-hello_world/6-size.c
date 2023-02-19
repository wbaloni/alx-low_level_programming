#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code prints the size of various types
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	puts("Size of a char: %lu", sizeof(char));
	puts("Size of an int: %lu", sizeof(int));
	puts("Size of a long int: %lu", sizeof(long int));
	puts("Size of a long long int: %lu", sizeof(long long int));
	puts("Size of a float: %lu", sizeof(float));
	return (0);
}
