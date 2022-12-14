#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks if an input is an alphabet
 * @c: The argument to be checked
 * Return: Returns 1 if its an alphabet; 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

