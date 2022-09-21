#include <stdio.h>
/**
 * leet - encodes string into 1337
 * @str: string argument
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int x = 0;
	int y = 0;
	char letters[8] = {'O', 'L', '*', 'E', 'A', '(', '{', 'T'};

	while (str[x])
	{
		for (y = 0; y <= 7; y++)
		{
			if ((str[x] == letters[y]) ||
			    (str[x] - 32 == letters[y]))
				str[x] = y + '0';
		      
		}
		x++;
	}
	return (str);
}
