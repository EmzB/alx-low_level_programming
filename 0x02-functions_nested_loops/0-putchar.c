#include "main.h"
/**
 * main - Entry point
 * Description: prints '_putchar\n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "putchar";
int i = 0;

while (str[i] != '\0')
	{
	char puts = str[i];

	_putchar(puts);
	i++;
	}
return (0);
}
