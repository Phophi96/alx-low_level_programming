#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int w;

	for (i = 0; i < 8; i++)
	{
		for (w = 0; w < 8; w++)
			_putchar(a[i][w]);
		_putchar('\n');
	}
}
