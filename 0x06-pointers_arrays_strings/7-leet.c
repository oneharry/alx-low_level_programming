#include <stdio.h>
/**
 * leet - encodes string into 1337
 * @str: string argument
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int x = 0;
	int y;
	char letters[8] = {'o', 'l', '*', 'e', 'a', '(', '{', '7'};

	while (str[x])
	{
		while (y <= 7)
		{
			if (str[x] == letters[y] ||
			    str[x] + 32 == letters[y])
				str[x] = y + '0';
			y++
		}
		x++;
	}
	return (str);
}
