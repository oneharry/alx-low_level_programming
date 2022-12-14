#include <stdio.h>
/**
 * _strcmp - Compares two strings
 * @s1: first argument string
 * @s2: second argument string
 * Return: a number depending on the result of comparison
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
