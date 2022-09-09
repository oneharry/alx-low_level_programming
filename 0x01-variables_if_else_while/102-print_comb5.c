#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int x, y, z, a;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				for (a = 1; a < 10; a++)
				{
					putchar((x % 10) + '0');
					putchar((y % 10) + '0');
					putchar(' ');
					putchar((z % 10) + '0');
					putchar((a % 10) + '0');
					if ((x == 9) && (y == 8) && (z == 9) && (a == 9))
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
		
	}
	putchar('\n');
	return (0);
}
