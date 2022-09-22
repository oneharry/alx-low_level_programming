#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, testing functions
 * Return: 0
 */
int main(void)
{
	char s2[] = "ROt13 (\"rotate by 13 places\", sometimes hyphenated";
	char *p = rot13(s2);
	printf("%s\n", p);
	printf("%s\n", s2);
	p = rot13(s2);
	printf("%s\n", s2);
	return (0);

}
