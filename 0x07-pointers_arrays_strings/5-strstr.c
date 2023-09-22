#include "main.h"
/**
 * _strstr - Entry point function
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *d = haystack;
		char *p = needle;

		while (*d == *p && *p != '\0')
		{
			d++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
