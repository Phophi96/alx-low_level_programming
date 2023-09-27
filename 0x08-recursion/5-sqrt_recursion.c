#include "main.h"

int actual_sqrt_recursion(int f, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @f: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int f)
{
	if (f < 0)
		return (-1);
	return (actual_sqrt_recursion(f, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @f: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int f, int i)
{
	if (i * i > f)
		return (-1);
	if (i * i == f)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
