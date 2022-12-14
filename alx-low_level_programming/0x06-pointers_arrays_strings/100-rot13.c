#include <stdio.h>
/**
 * rot13 - encodes string into using rot13
 * @str: string argument
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	int x = 0;
	int y = 0;
	char alpha[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			  'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
			  'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
			  'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
			  'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y',
			  'Z'};
	char rot13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
			  'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
			  'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q',
			  'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
			  'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			  'L', 'M'};
	while (str[x])
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == alpha[y])
			{
				str[x] = rot13[y];
				break;
			}
		}
		x++;
	}
	return (str);
}
