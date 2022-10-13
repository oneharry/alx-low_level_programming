#include "3-calc.h"
#include <stdio.h>
/**
  * main - prints opcode
  * @argc: count of args
  * @argv: strings of args
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	int num, i;
	unsigned char code;
	int (*my_func)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num; i++)
	{
		code = *(unsigned char *)(my_func);
		printf("%.2x", code);
		printf(" ");
		my_func++;
	}
	printf("\n");
	return (0);
}
