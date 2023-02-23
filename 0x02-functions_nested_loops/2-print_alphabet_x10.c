#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
