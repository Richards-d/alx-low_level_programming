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

	scanf("%d");
	for (i = '0'; i <= '3'; i++)
		putchar("%d", i);
	for (j = '4'; j <= '6'; j++)
		putchar("%d", j);
	for (k = '7'; k <= '9'; k++)
		putchar("%d", k);
	putchar('\n');
	return (0);
}
