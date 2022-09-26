#include "main.h"
/**
  * _strstr - locates a subsring
  * @haystack: pointer to the string
  * @needle: pointer the substring
  * Return: a pointer to the first occurence of c
*/
char *_strstr(char *haystack, char *needle)
{
	int x;

	if (!(*needle))
		return (haystack);
	for (x = 0; *(haystack + x); x++)
	{
		if (*needle != *(haystack + x))
			continue;
		if (!(needle))
			return (haystack);
		if (*needle++ != *(haystack + x))
			break;
	}
	return (NULL);
}
