#include "main.h"
#include <stdio.h>

/**
 * main -Entry point
 * Return: 0
 */

int main(void)
{
	char *str;

	str = "I do not fear computer. I fear the lack of them - Isaac Asim";
	print_rev(str);
	return (0);
}
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len - 1; i >= 0; i - 1)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
int _strlen(char *s)
{
	int x = 0;
	while (s[x] != 0)
	{
		x++;
	}
}
