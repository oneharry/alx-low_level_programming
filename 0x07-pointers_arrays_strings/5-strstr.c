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

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (*(needle + x) == *(haystack + x))
		{
			do {
				if (*(needle + x + 1) == 0)
					return (haystack);
				x++;
			} while (*(needle + x) == *(haystack + x));
		}
		haystack++;
	}
	return (NULL);
}
