#include "main.h"
/**
  * _strchr - Locatess the first character in a string
  * @s: pointer to the string
  * @c: character to be located
  * Return: a pointer to the first occurence of c
*/
char *_strchr(char *s, char c)
{
	int x;

	for (i = 0; *(s + x); x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	return (NULL);
}
