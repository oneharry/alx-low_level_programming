#include <stdio.h>
/**
 * rot13 - encodes string into using rot13
 * @str: string argument
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	int x = 0;

	for (x = 0; str[x]; x++)
	{
		if (str[x] >= 'A' && str[x] <= 'M')
			str[x] += 13;
		else if (str[x] >= 'N' && str[x] <= 'Z')
			str[x] -= 13;
		else if (str[x] >= 'a' && str[x] <= 'm')
			str[x] += 13;
		else if (str[x] >= 'n' && str[x] <= 'z')
			str[x] -= 13;
	}
	return (str);
}
