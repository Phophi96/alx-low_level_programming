#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @p: The string to be printed.
 */
void _print_rev_recursion(char *p)
{
	if (*p)
	{
		_print_rev_recursion(p + 1);
		_putchar(*p);
	}
}
