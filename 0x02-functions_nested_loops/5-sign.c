
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int print_sign(int n);
int main(void)
{
	int num = 0;
	
	printf("Enter: ");
	scanf("%d", &num);
	printf("%d", print_sign(num));
	return (0);
}
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n < 0)
	{
		putchar('-');
		return (-1);
	} else if (n = 0)
	{
		putchar('0');
		return (0);
	}
		
}

