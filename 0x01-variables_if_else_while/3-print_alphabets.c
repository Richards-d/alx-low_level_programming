#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar("%c", i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar("%c", i);
	return (0);
}
