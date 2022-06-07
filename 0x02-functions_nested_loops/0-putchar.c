#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int _putchar(char _putchar)
{
	return (write(1, &_putchar, 1));
}
