#include "main.h"
#include <stdio.h>

/**
 * main -Entry point
 * Return: 0
 */

int main(void)
{

	char *str;

	str = "My first strlen!";
	print_rev(str);
	//printf("n=%d\n", len);
	return (0);
}
void print_rev(char *s)
{
	int len = le(s);
	int i;
	for (i = len - 1; i >= 0; i--)
	{
//		putchar(s[i]);
	}
	putchar('\n');
}
int le(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		*s++;
	}
}
