#include <stdio.h>
/**
 * _strcmp - Compares two strings
 * @s1: first argument string
 * @s2: second argument string
 * Return: a number depending on the result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] && s2[x]; x++)
	{
		if (s1[x] == s2[x])
			continue;
		else
			break;
	}
	return (*s1 - *s2);
}
