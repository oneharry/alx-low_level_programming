#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks for lowercase characters
 * @c: the character to be checked
 * Return: Retruns 1 if its a lowercase char, and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
	     	return (0);
}
