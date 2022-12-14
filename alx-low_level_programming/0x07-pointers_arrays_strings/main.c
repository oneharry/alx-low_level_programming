#include "main.h"
/**
  * main - entry point function
  * Return: 0 for success
  */
int main(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};
	print_chessboard(board);
	return (0);
}
