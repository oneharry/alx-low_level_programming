#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, testing functions
 * Return: 0
 */
int main(void)
{
	char s1[98];
	char *ptr;
	int i;
	char s2[] = "First, solve the problem. Then, write the code\n";

	for (i = 0; i < 98 - 1; i++)
		s1[i] = '*';
	s1[i] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, s2, 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, s2, 90);
	printf("%s", s1);
	printf("%s", ptr);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(1 % 10) && i)
			printf("\n");
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	return (0);
}
