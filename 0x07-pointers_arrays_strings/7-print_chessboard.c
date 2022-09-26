#include "main.h"
/**
  * print_chessboard - locates a subsring
  * @a: pointer to the string
  * Return: void
*/
void print_chessboard(char (*a)[8])
{
	int len = sizeof(a) / sizeof(*a);
	
	
	for (int x = 0; x <= len; x++)
	{
		for (int y = 0; y < 8; y++)
		{
			char b = a[x][y];
			printf("%c", b);
		}
		printf("\n");
	}
}
