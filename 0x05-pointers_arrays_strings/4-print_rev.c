#include "main.h"
/**
 * print_rev - prints reversed string then a new line.
 * @s: pointer to string.
 * Return: Value 0
 */
void print_rev(char *s)
{
	int bee;

	for (bee = 0; s[bee] != '\0'; bee++)
	{
	}
	for (bee = bee - 1; bee >= 0; bee--)
	{
		_putchar(s[bee]);
	}
	_putchar('\n');
}
