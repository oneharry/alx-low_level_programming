#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, testing functions
 * Return: 0
 */

int main(void)
{
	/**
	char s1[98] = "Hello ";

	printf("%s\n", s1);
	printf("%s", s2);
	p = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", p);
	return (0);
*/
	char s[] = "Expect the best. Prepare for the worst."
		"Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", p);
	return (0);
}
