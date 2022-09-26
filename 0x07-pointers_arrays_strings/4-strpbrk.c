#include "main.h"
/**
  * _strpbrk - searches a string for any set of bytes
  * @s: pointer to the string
  * @accept: pointer the string that is evaluated
  * Return: a pointer to the first occurence of c
*/
unsigned int _strpbrk(char *s, char *accept)
{
	for (int x = 0; *s; x++, s++)
	{
		for (int y = 0; *accept; y++, accept++)
		{
			if (*(accept + y) == *(s + x))
				return (*(s + x));
		}
	}
	return (NULL);
}
