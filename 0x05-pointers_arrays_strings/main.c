#include "main.h"
#include <stdio.h>

/**
 * main -Entry point
 * Return: 0
 */

int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
void rev_string(char *s)
{
	char hold;
	int len = (_strlen(s) - 1);
	int i = 0;

	while (i < len)
	{
		hold = s[i];
		s[i] = s[len];
		s[len] = hold;
		len--;
		i++;
	      len);
	}
	putchar('\n');
}
int _strlen(char s[])
{
	int x = 0;
	while (s[x] != 0)
	{
		x++;
	}
}
