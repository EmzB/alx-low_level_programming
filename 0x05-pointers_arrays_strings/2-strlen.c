#include "main.h"
/**
 * _strlen - determine length of a string.
 * @s: pointer to string.
 * Return: void
*/
int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}
