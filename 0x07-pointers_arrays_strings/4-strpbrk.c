#include "main.h"
/**
  * _strpbrk - searches a string for any set of bytes
  * @s: pointer to the string
  * @accept: pointer the string that is evaluated
  * Return: a pointer to the first occurence of c
*/
char *_strpbrk(char *s, char *accept)
{
	int y;

	for (; *s; s++)
	{
		for (y = 0; *accept; y++, accept++)
		{
			if (*(accept + y) == *s)
				return (s);
		}
	}
	return (NULL);
}
