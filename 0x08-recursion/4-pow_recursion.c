#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of d
 * @z: value to raise
 * @d: power
 *
 * Return: result of the power
 */
int _pow_recursion(int z, int d)
{
	if (d < 0)
		return (-1);
	if (d == 0)
		return (1);
	return (z * _pow_recursion(z, d - 1));
}
