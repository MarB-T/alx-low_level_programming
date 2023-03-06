#include "main.h"

/**
 * print_chessboard - prints chess board
 * @a: pointer to 2d array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int x = 0, y = 0, l;

	for (x = 0; x < l; x++)
	{
		for (y = 0; y < l; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
