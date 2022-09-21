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
		"what comes. \nhello wolrd! hello-world 0123456hello"
		"world\thello world.hello world\n";

	ptr = cap_string(s2);
	printf("%s", ptr);
	printf("%s", ptr);
	return (0);

}
