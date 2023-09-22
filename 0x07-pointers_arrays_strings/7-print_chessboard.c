#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int w;
	int a;

	for (w = 0; w < 8; w++)
	{
		for (a = 0; a < 8; a++)
			_putchar(a[w][a]);
		_putchar('\n');
	}
}
