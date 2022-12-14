#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
		return (0);
}
