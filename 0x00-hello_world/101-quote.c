#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Output - Prints strings to the out there
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpa, 2015-10-19\n", 58);
	return 1;
}