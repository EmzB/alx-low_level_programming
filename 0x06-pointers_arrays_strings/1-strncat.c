#include "main.h"
/**
 *_strncat - commute two strings
 *@dest: pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: return dest
 */
char *_strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
