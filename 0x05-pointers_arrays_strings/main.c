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
	
	puts2(str);
	return (0);
}
void puts2(char *s)
{
	char hold;
	int len = (_strlen(s) - 1);
	int i = 0;

	for (i = 0; i < len; i + 2)
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
