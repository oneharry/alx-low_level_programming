#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a given string
 * @s:string argument
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		*s++;
		counter++;
	}
	return (counter);
}
