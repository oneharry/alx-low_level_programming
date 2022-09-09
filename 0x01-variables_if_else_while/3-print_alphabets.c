#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (char y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
