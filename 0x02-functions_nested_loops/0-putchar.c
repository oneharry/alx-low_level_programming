#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "_putchar";
	char *str = msg;
	int i = 0;
	while (*str != '\0')
	{
		putchar(*str);
		*str++;
	}
	putchar('\n');
	return (0);
}
