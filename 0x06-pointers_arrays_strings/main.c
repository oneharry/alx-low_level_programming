#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, testing functions
 * Return: 0
 */
int main(void)
{
	char s2[] = "World!";
	char s1[] = "Hello";

	printf("%d", _strcmp(s1, s2));
	printf("%d", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);

}
