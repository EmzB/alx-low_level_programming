#include "main.h"

/**
 * print_alphabetx10 - print alphabet
 *
 * Return: Success 0.
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;


count = 0;
while (count < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

count++;
_putchar('\n');
}


}
