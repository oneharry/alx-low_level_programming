#include "main.h"
/**
  * _strstr - locates a subsring
  * @haystack: pointer to the string
  * @needle: pointer the substring
  * Return: a pointer to the first occurence of c
*/
char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y = 0;

	while (*needle == 0)
		return (haystack);
	while ((*(haystack + x) != '\0') && (*(needle + y) != '\0'))
	{
		if (*(needle + y) != *(haystack + x))
		{
			x++;
			y = 0;
		} else
		{
			y++;
			x++;
		}
		if (*(needle + y) == '\0')
			return (haystack);
		else 
			return (NULL);
	}
	return (NULL);
}
