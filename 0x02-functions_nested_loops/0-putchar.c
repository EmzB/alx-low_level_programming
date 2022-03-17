#include "stdio.h"

/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char arr[] = "_putchar";

	for (i = 0; i < sizeof(arr); i++)
		{
		_putchar(arr[i]);
		}
		_putchar('\n');
	return (0);
}
