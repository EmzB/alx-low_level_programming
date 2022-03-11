#include <stdio.h>

/**
* main - Print 0-9 digit numbers using only putchar
*
* Return: 0 is always (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0)
