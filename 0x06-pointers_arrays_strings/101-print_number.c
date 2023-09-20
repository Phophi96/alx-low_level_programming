#include "main.h"

/**
 * print_number - function print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int a)
{
	unsigned int a1;

	a1 = a;

	if (a < 0)
	{
		_putchar('-');
		a1 = -a;
	}

	if (a1 / 10 != 0)
	{
		print_number(a1 / 10);
	}
	_putchar((a1 % 10) + '0');
}
