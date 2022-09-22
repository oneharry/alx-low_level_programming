#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, testing functions
 * Return: 0
 */

int main(void)
{
	char *p;
	char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated\n";
	p = rot13(s);
	printf("%s", p);
	printf("-------------------------\n");
	printf("%s", s);
	printf("-------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("-------------------------\n");
	printf("%s", s);
	printf("--------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("---------------------------\n");
       	printf("%s", p);
	return (0);
}
