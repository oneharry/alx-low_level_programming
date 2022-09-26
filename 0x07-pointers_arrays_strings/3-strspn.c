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

	for (int x = 0; *s; x++, s++)
	{
		for (int y = 0; *accept; y++, accept++)
		{
			if (*(accept + y) != *(s + x))
				break;
			i++;
		}
	}
	return (i);
}
