#include "main.h"

/**
 * print_alphabet - print the alphabet in a lowercase followed by a new line.
 * Return:return nothing
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z' ; letter++)
{
	_putchar(letter);
	_putchar('\n');
}	
	return;
}	
