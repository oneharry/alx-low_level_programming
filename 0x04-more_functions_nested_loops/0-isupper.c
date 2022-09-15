#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character argument
 * Return: 0
 */

int _isupper(int c)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == c)
			return (1);
		else
			return (0);
	}

	return (0);
}
