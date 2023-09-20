#include "main.h"
/**
 * reverse_array -function that reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int p;
	int d;

	for (p = 0; p < n--; p++)
	{
		d = a[p];
		a[p] = a[n];
		a[n] = d;
	}
}
