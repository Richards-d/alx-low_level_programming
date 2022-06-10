#include "main.h"
/**
 * prints_alphabet - Prints lowercase alphabets, followed by a new line.
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
