#include "main.h"
#include <stdio.h>

/**
 * main -Entry point
 * Return: 0
 */

int main(void)
{
	char *str;
	str = "0123456789";
	
	puts_half(str);
	return (0);
}
void puts_half(char *s)
{
	int len = _strlen(s);
	int i;
	for (i = len - 1; i >= len / 2; i--)
	{
		putchar('H');
		putchar(s[i]);
	}
	putchar('\n');
}
int _strlen(char *s)
{
	int x = 0;
	while (s[x])
	{
		x++;
	}
}
