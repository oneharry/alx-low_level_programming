#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, testing functions
 * Return: 0
 */
int main(void)
{
	char *ptr;
	char s2[] = "Expect the best. Prepare for the worst. Capitalize on"
		"what comes.\n";
	ptr = leet(s2);
	printf("%s", ptr);
	printf("%s", s2);
	return (0);

}
