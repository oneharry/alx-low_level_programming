#include <stdio.h>
/**
 * leet - encodes string into 1337
 * @str: string argument
 * Return: pointer to the encoded string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum;
	int hold;

	while (*n1 && *n2)
	{
		sum = (*n1 - '0') + (*n2 - '0') + hold;
		hold = sum / 10;
		*(r + size_r) = (sum % 10) + '0';
		n1--;
		n2--;
		size_r--;
	}
	while (*n1)
	{
		sum = (*n1 - '0');
		*(r + size_r) = (sum % 10) + '0';
		n1--;
		size_r--;
	}
	while (*n2)	
	
	{
		sum = (*n2 - '0');
		*(r + size_r) = (sum % 10) + '0';
		n2--;
		size_r--;
	}
	if (hold && size_r >= 0)
	{
		*(r + size_r) = (hold % 10) + '0';
		return (r + size_r);
	}
	else if (hold && size_r < 0)
	{
		return (0);
	} else 
	{
		return (r + size_r + 1);
	}
		return (r);
}
