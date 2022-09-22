#include <stdio.h>
/**
 * rot13 - encodes string into using rot13
 * @str: string argument
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	char normal_alph[53] = "abcdefghijklmnopqrstuvwzyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alph[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZ"
		"ABCDEFGHIJKLM";
	int x = 0;
	int y = 0;

	for (x = 0; str[x]; x++)
	{
		for(y = 0; str[y]; y++)
		{
			if (str[x] == normal_alph[y])
				str[x] = rot13_alph[y];
		}
	}
	return (str);
}
