#include "main.h"
/**
 * _strlen - the length of a string.
 * @s: string to ckeck
 * Return: int length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
