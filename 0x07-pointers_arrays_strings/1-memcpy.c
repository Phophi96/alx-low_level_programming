#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int d = n;

	for (; p < d; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
