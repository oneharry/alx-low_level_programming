#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, testing functions
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
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
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
