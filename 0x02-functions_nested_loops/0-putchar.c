#include <unistd.h>
#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main()
{
	_putchar(c);
	_putchar('\n');
	return (0);
}
