#include "3-calc.h"
#include <stdio.h>
/**
  * main - Takes args and perfom operation
  * @argc: count of args
  * @argv: strings of args
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	int num1, num2, value;

	if (argc != 4)
	{
		printf("1Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("2Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' && num2 == 0) ||
				(*argv[2] == '%' && num2 == 0))
	{
		printf("3Error\n");
		exit(100);
	}
	value = get_op_func(argv[2])(num1, num2);
	printf("%d\n", value);
	return (0);
}
