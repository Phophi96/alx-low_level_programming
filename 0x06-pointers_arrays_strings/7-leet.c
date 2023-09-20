#include "main.h"
/**
 * leet - function that encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int p, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0'; p++)
	{
		for (z = 0; p < 10; z++)
		{
			if (n[p] == s1[z])
			{
				n[p] = s2[z];
			}
		}
	}
	return (n);
}
