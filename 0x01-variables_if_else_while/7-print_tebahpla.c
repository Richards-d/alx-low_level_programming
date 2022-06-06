#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
