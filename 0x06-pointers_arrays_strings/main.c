#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, testing functions
 * Return: 0
 */
int main(void)
{
	char *ptr;
	char s2[] = "First, solve the problem. Then, write the code\n";

	ptr = cap_string(s2);
	printf("%s", ptr);
	printf("%s", ptr);
	return (0);

}
