#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '3'; i++)
		putchar(',');
	for (j = '4'; j <= '6'; j++)
		putchar(',');
	for (k = '7'; k <= '9'; k++)
		putchar(',');
	putchar('\n');
	return (0);
}
