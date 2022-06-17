#include "main.h"

/**
 * _puts - function that prints a string
 * @str: pointer to a string to print
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
