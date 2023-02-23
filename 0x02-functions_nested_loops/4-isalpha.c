#include "main.h"

/**
 * _isalpha - checks for letter
 *
 * @c: character to be checked
 *
 * Return: 1 if c is alphabetic
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
