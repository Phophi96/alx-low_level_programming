#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int z;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[p] = src[z];
	p++;
	z++;
	}
	dest[p] = '\0';
	return (dest);
}
