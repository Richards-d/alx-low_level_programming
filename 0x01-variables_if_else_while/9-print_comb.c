#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = "1, "; i <= "3, "; i++)
		putchar(i);
	for (j = "4, "; j <= "6, "; j++)
		putchar(j);
	for (k = "7, "; k <= "9, "; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
