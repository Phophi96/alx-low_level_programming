#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function to prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int h, z, p;

	h = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (h < size)
	{
		z = size - h < 10 ? size - h : 10;
		printf("%08x: ", h);
		for (p = 0; p < 10; p++)
		{
			if (p <z)
				printf("%02x", *(b + h + p));
			else
				printf("  ");
			if (p % 2)
			{
				printf(" ");
			}
		}
