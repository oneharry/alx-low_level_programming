#include "main.h"
/**
  * _strstr - locates a subsring
  * @haystack: pointer to the string
  * @needle: pointer the substring
  * Return: a pointer to the first occurence of c
*/
char *_strstr(char *haystack, char *needle)
{
	if (!(*needle))
		return (haystack);
	for ( ; *haystack; haystack++)
	{
		if (*needle != *haystack)
			continue;
		if (!(needle))
			return (haystack);
		if (*needle++ != *haystack++)
			break;
	}
	return (NULL);
}
