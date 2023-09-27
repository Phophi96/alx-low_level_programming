#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*p)
	{
		_putchar(*p);
		_puts_recursion(p+ 1);
	}

	else
		_putchar('\n');
}
