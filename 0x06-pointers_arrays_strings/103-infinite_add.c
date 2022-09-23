#include <stdio.h>
#include <string.h>
/**
 * leet - encodes string into 1337
 * @str: string argument
 * Return: pointer to the encoded string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char sum;
	char hold = '0';
	int x, y;
	int len = 0;
	if (strlen(n1) > strlen(n2))
		len = strlen(n1);
	else
		len = strlen(n2);
	for (x = len;  n2[x] || n1[x]; x--)
	{
		if (n2[x] + n1[x] > 9)
		{
			sum = ((n2[x] + n1[x] + hold) % 10);
			hold = ((n2[x] + n1[x] + hold) / 10);
		} else
		{
			sum = n2[x] + n1[x] + hold;
		}
		for (y = size_r; y >= 0; y--)
		{
			if ((--y) >= 0)
				r[y] = sum;
			
			else
				return (0);
		}
	}
	return (r);
}
