#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}

