#include <stdio.h>
/**
 * main -  Entry
 * Return: (0)
 */
int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	while (LETTER <= 'Z')
	{
	putchar(LETTER);
	LETTER++;
	}
	putchar('\n');
	return (0);
}

