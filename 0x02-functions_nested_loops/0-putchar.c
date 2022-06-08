#include <unistd.h>
#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	for (c = "_putchar");
	return (write(1, &c, 1));
	return (0);
}
