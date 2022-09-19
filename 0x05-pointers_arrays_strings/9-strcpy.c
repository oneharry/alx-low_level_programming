#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Copy string to another pointer
 * @dest: pointer argument
 * @src: pointer argument
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	const char *s;
	int x;

	s = src;
	for (x = 0; src[x]; x++)
	{
		if (src[x] == '\0')
			dest[x] = s[x];
		dest[x] = src[x];
	}
	return (dest);
}
