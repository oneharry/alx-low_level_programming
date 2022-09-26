#include "main.h"
/**
  * _strspn - gets the length of a prefix string
  * @s: pointer to the string
  * @accept: pointer the string that is evaluated
  * Return: a pointer to the first occurence of c
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int x, y;

	for (x = 0; *s; x++, s++)
	{
		for (y = 0; *accept; y++, accept++)
		{
			if (*(accept + y) == *(s + x))
			{
				i++;
				break;
			}
		}
	}
	return (i);
}
