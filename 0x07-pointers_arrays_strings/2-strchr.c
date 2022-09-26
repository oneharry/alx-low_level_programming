#include "main.h"
/**
  * _strchr - Locatess the first character in a string
  * @s: pointer to the string
  * @c: character to be located
  * Return: a pointer to the first occurence of c
*/
char *_strchr(char *s, char c)
{
	char *first_c;

	for (int x = 0; *s; x++, s++)
	{
		if (*(s + x) == c)
			return (s);
	}
	return (NULL);
}
