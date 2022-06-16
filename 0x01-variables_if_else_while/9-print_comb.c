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
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
