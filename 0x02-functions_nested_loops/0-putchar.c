#include "main.h"
/**
 * main - Entry point
 * Description: prints '_putchar\n'
 * Return: Always 0 (success)
 */
int main(void)
{
char val[] = "_putchar";
int i = 0;

while (val[i] != '\0')
	{
	char q= val[i];

	_putchar(q);
	i++;
	}
return (0);
}
