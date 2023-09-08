#include <stdio.h>
/**
 * main -  Entry
 * Return: (0)
 */
int main(void) {
    char letter = 'a';

    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    putchar('\n'); // Print a newline character

    return 0;
}
