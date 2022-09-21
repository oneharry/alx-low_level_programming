#include <stdio.h>
/**
 * string_toupper - changes all lowercase to upper case
 * @c: character lowercase
 * Return: upper case letter
 */
char *string_toupper(char *c)
{
	int x;

	for (x = 0; c[x]; x++)
	{
		if (c[x] >= 'a' && c[x] <= 'z')
			c[x] -= 32;
	}
	return (c);
}
