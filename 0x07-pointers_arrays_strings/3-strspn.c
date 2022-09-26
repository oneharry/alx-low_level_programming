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

	for ( ; *s;)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(accept + y) == *s)
			{
				i++;
				break;
			} else if (*(accept + y + 1) == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
