#include "main.h"
/**
 * puts_half - prints half of a string, the second half 
 * @str: the string reference
 * Return 0
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
