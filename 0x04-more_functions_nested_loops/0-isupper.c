#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character argument
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

	return (0);
}
